n = int(input())
nums = [int(x) for x in input().split()]
cout = ''

if nums[0] > 0:
    cout += f'{str(nums[0])}x^{str(n)}'
elif nums[0] < 0:
    cout += f'{str(nums[0])}x^{str(n)}'

for i in range(1, len(nums)):
    if n - i == 0:
        if nums[i] > 0:
            if nums[i] == 1:
                cout += '+1'
            else:
                cout += f'+{str(nums[i])}'

        elif nums[i] < 0:
            if nums[i] == -1:
                cout += f'-1'
            else:
                cout += f'-{str(-1 * nums[i])}'

    else:
        if nums[i] > 0:
            if nums[i] == 1:
                cout += f'+x^{str(n - i)}'
            else:
                cout += f'+{str(nums[i])}x^{str(n - i)}'

        elif nums[i] < 0:
            if nums[i] == -1:
                cout += f'-x^{str(n - i)}'
            else:
                cout += f'-{str(-1 * nums[i])}x^{str(n - i)}'

print(cout, end='')
