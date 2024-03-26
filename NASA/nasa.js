const apiKey = "Da2CsBDJ7tRU9j3RxQy8Br4yT1vaeZx8GXmUznYD";
const apodUrl = `https://api.nasa.gov/planetary/apod?api_key=${apiKey}`;

const apodImg = document.getElementById("apod-img");
const apodTitle = document.getElementById("apod-title");
const apodDate = document.getElementById("apod-date");
const apodExplanation = document.getElementById("apod-explanation");
const apodInfoList = document.getElementById("apod-info-list");

fetch(apodUrl)
    .then(response => response.json())
    .then(data => {
        apodTitle.textContent = data.title;
        apodDate.textContent = data.date;
        apodExplanation.textContent = data.explanation;

        if (data.media_type === "image") {
            apodImg.src = data.url;
            apodImg.alt = data.title;
        } else {
            apodImg.style.display = "none";
        }

        // Additional information
        const additionalInfo = [
            { label: "Service Version", value: data.service_version },
            { label: "Concept Tags", value: data.concepts },
            { label: "HD URL", value: data.hdurl },
            { label: "Media Type", value: data.media_type },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
            { label: "Thumbnail URL", value: data.thumbnail_url },
        ];

        additionalInfo.forEach(info => {
            const listItem = document.createElement("li");
            listItem.innerHTML = `<strong>${info.label}:</strong> ${info.value}`;
            apodInfoList.appendChild(listItem);
        });
    })
    .catch(error => {
        console.error("Error fetching APOD:", error);
    });
