import requests
import openai

api_key = "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"
openai.api_key = api_key

response = openai.Image.create(
    prompt="anime primary school girl uniform classroom twilight alone sitting window",
    n=1,
    size="1024x1024"
)

image_url = response['data'][0]['url']
image_response = requests.get(image_url)
with open("generated_image.jpg", "wb") as img_file:
    img_file.write(image_response.content)

print("Done！")
