# Sum of Positive Integers（正数累加程序）

一个使用 C 语言编写的小程序，用于计算用户输入的所有正整数之和。

A simple C program that calculates the sum of all positive integers entered by the user.

---

## 📌 功能说明 | Features

- 用户可以连续输入整数
- 输入 `0` 时程序结束
- 负数不会参与累加
- 最终输出所有正整数的总和

- Users can continuously input integers  
- Input `0` to terminate the program  
- Negative numbers are ignored  
- Outputs the sum of all positive integers  

---

## 🧠 程序逻辑 | Program Logic

1. 提示用户输入整数  
2. 使用 `while(1)` 无限循环接收输入  
3. 判断输入值：
   - 如果是 `0` → 结束循环  
   - 如果是正数 → 累加  
   - 如果是负数 → 忽略  
4. 输出结果  

---

## ▶️ 如何运行 | How to Run

### 方法一：命令行编译

```bash
gcc sumpositiveintegers.c -o sum
./sum
