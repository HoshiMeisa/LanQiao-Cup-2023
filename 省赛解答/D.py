# D
# 暴力
def earliest_detection(n, len_pipe, valve_data):
    sensor_detection = [float("inf")] * len_pipe

    for Li, Si in valve_data:
        Li -= 1
        for i in range(len_pipe):
            Ti = abs(i - Li) + Si
            sensor_detection[i] = min(sensor_detection[i], Ti)

    return max(sensor_detection)

valve_data = []
n, len_pipe = map(int, input().split())
for _ in range(n):
    a, b = map(int, input().split())
    valve_data.append((a, b))


result = earliest_detection(n, len_pipe, valve_data)


print(result)
