// Retrieve saved username from localStorage
const savedUsername = localStorage.getItem('githubUsername');
if (savedUsername) {
  document.getElementById('username').value = savedUsername;
  getUserInfo();
}

function getUserInfo() {
  const username = document.getElementById('username').value;
  fetch(`https://api.github.com/users/${username}`)
    .then(response => response.json())
    .then(data => {
      const userInfo = document.getElementById('user-info');
      userInfo.innerHTML = `
        <div class="bg-white rounded-xl p-8 shadow-lg mb-8">
          <div class="flex items-center justify-center mb-4">
            <img src="${data.avatar_url}" alt="Avatar" class="w-32 h-32 rounded-full">
          </div>
          <div class="text-center">
            <p><strong>Login:</strong> ${data.login}</p>
            <p><strong>ID:</strong> ${data.id}</p>
            <p><strong>GitHub URL:</strong> <a href="${data.html_url}" class="text-blue-500" target="_blank">${data.html_url}</a></p>
            <p><strong>Name:</strong> ${data.name ? data.name : 'N/A'}</p>
            <p><strong>Company:</strong> ${data.company ? data.company : 'N/A'}</p>
            <p><strong>Location:</strong> ${data.location ? data.location : 'N/A'}</p>
            <p><strong>Email:</strong> ${data.email ? data.email : 'N/A'}</p>
            <p><strong>Followers:</strong> ${data.followers}</p>
            <p><strong>Following:</strong> ${data.following}</p>
          </div>
        </div>
      `;
      getFollowers(username);
      // Save username to localStorage
      localStorage.setItem('githubUsername', username);
    })
    .catch(error => console.error('Error fetching user info:', error));
}

function getFollowers(username) {
  fetch(`https://api.github.com/users/${username}/followers`)
    .then(response => response.json())
    .then(data => {
      const followersList = document.getElementById('followers-list');
      followersList.innerHTML = '';
      data.forEach(follower => {
        const followerItem = document.createElement('div');
        followerItem.classList.add('bg-white', 'p-4', 'rounded-xl', 'shadow-md', 'hover:shadow-lg', 'transition', 'duration-300');
        followerItem.innerHTML = `
          <div class="flex items-center">
            <img src="${follower.avatar_url}" alt="Avatar" class="w-12 h-12 rounded-full">
            <div class="ml-4">
              <p><strong>Login:</strong> ${follower.login}</p>
              <p><strong>ID:</strong> ${follower.id}</p>
              <p><strong>GitHub URL:</strong> <a href="${follower.html_url}" class="text-blue-500" target="_blank">${follower.html_url}</a></p>
              <p><strong>Followers:</strong> ${follower.followers}</p>
              <p><strong>Following:</strong> ${follower.following}</p>
            </div>
          </div>
        `;
        followersList.appendChild(followerItem);
      });
    })
    .catch(error => console.error('Error fetching followers:', error));
}
