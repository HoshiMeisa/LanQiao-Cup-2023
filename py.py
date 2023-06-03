import requests
import openai

# 替换为您的API密钥
api_key = "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"

# 设置API密钥
openai.api_key = api_key

# 发送API请求
response = openai.Image.create(
    prompt="一只白色暹罗猫",
    n=1,
    size="1024x1024"
)

# 获取图片URL
image_url = response['data'][0]['url']

# 下载并保存图片
image_response = requests.get(image_url)
with open("generated_image.jpg", "wb") as img_file:
    img_file.write(image_response.content)

print("图片生成成功！")
