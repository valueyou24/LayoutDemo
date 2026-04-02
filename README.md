# LayoutDemo - Qt 布局演示与计算器应用

## 项目简介

LayoutDemo 是一个基于 Qt 6.8 开发的桌面应用程序，旨在演示 Qt 中多种布局管理器的使用方法，并实现了一个功能完整的计算器。该项目适合 Qt 初学者学习布局管理和信号槽机制。

## 功能特性

### 1. 计算器功能（栅格布局）

位于界面右侧的"栅格布局"区域，实现了完整的标准计算器功能：

#### 基本运算
| 功能 | 说明 |
|------|------|
| 数字键 0-9 | 输入数字 |
| 加法 (+) | 两数相加 |
| 减法 (-) | 两数相减 |
| 乘法 (x) | 两数相乘 |
| 除法 (÷) | 两数相除 |
| 等号 (=) | 计算结果 |

#### 编辑功能
| 功能 | 说明 |
|------|------|
| Backspace | 删除最后一个字符 |
| Clear | 清除当前输入 |
| Clear All | 清除所有状态（重置计算器） |
| 小数点 (.) | 输入小数 |
| 正负号 (±) | 切换数值正负 |

#### 科学计算
| 功能 | 说明 |
|------|------|
| Sqrt | 计算平方根 |
| x² | 计算平方 |
| 1/x | 计算倒数 |

#### 内存操作
| 功能 | 说明 |
|------|------|
| MC | 清除内存 |
| MR | 读取内存值 |
| MS | 保存当前值到内存 |
| M+ | 将当前值加到内存 |

### 2. 水平布局演示

位于界面左侧上方，展示了 QHBoxLayout 的使用：

- 四个按钮水平排列
- 演示了 stretch 属性设置（0, 0, 1, 2）
- 按钮宽度按比例分配

### 3. 表单布局演示

位于界面右侧下方，展示了 QFormLayout 的使用：

- 标签与输入框配对显示
- 包含姓名、邮箱、岗位等表单项
- 演示了 QLineEdit 和 QComboBox 的使用

### 4. 布局信息监控

窗口大小变化时，自动在文本编辑器中记录布局参数：

- 按钮宽度变化
- 布局边距（左、上、右、下）
- 控件间距

## 项目结构

```
LayoutDemo/
├── CMakeLists.txt          # CMake 构建配置文件
├── main.cpp                # 应用程序入口
├── mywidget.h              # 主窗口类声明
├── mywidget.cpp            # 主窗口类实现
├── mywidget.ui             # Qt Designer 界面文件
├── .clangd                 # clangd 语言服务器配置
└── README.md               # 项目说明文档
```

## 技术栈

- **Qt 版本**: 6.8.3
- **编译器**: MSVC 2022 (64-bit)
- **构建系统**: CMake 3.19+
- **C++ 标准**: C++17
- **UI 设计**: Qt Designer (.ui 文件)

## 构建说明

### 环境要求

- Qt 6.8.3 (MSVC 2022 64-bit)
- CMake 3.19 或更高版本
- Visual Studio 2022 或 MSVC Build Tools
- Windows 10/11

### 编译步骤

1. 打开命令行，进入项目目录

2. 创建构建目录：
   ```bash
   mkdir build
   cd build
   ```

3. 配置项目：
   ```bash
   cmake .. -DCMAKE_PREFIX_PATH=D:/Qt/6.8.3/msvc2022_64
   ```

4. 编译项目：
   ```bash
   cmake --build . --config Debug
   ```

5. 运行程序：
   ```bash
   ./Debug/LayoutDemo.exe
   ```

### 使用 Qt Creator

1. 打开 Qt Creator
2. 选择 "文件" -> "打开文件或项目"
3. 选择 `CMakeLists.txt` 文件
4. 配置项目（选择 Qt 6.8.3 MSVC 2022 64-bit 套件）
5. 点击 "构建" -> "运行" 或按 Ctrl+R

## 代码规范

本项目遵循以下编码规范：

### 命名规范

| 类型 | 规范 | 示例 |
|------|------|------|
| 类名 | 大驼峰 (PascalCase) | `MyWidget` |
| 函数名 | 小驼峰 (camelCase) | `onDigitClicked()` |
| 成员变量 | m_ 前缀 + 小驼峰 | `m_displayText` |
| 局部变量 | 小驼峰 | `clickedBtn` |
| 常量/宏 | 全大写 + 下划线 | `MAX_BUFFER_SIZE` |
| UI 控件 | 类型缩写 + 业务名 | `btnNum0`, `lineEditDisplay` |

### 注释规范

- 文件头注释：包含版权、作者、日期、简介
- 类和函数注释：使用 Doxygen 风格
- 行内注释：解释"为什么"而非"做什么"

### 代码风格

- 缩进：4 个空格
- 大括号：控制语句使用 K&R 风格（左括号在同一行）
- 行宽：不超过 100 字符

## 核心类说明

### MyWidget

主窗口类，继承自 QWidget，负责：

- 初始化 UI 界面
- 建立信号槽连接
- 处理计算器逻辑
- 响应窗口大小变化事件

#### 主要成员变量

| 变量名 | 类型 | 说明 |
|--------|------|------|
| `m_displayText` | QString | 当前显示的文本 |
| `m_pendingOperator` | QString | 待处理的运算符 |
| `m_firstOperand` | double | 第一个操作数 |
| `m_secondOperand` | double | 第二个操作数 |
| `m_waitingForOperand` | bool | 是否等待新操作数 |
| `m_memoryValue` | double | 内存存储值 |

#### 主要槽函数

| 函数名 | 说明 |
|--------|------|
| `onDigitClicked()` | 处理数字按钮点击 |
| `onOperatorClicked()` | 处理运算符按钮点击 |
| `onEqualClicked()` | 处理等号按钮点击 |
| `calculate()` | 执行数学运算 |

## 许可证

Copyright © 2026 LayoutDemo. All rights reserved.

## 贡献指南

欢迎提交 Issue 和 Pull Request 来改进本项目。

## 联系方式

如有问题或建议，请通过以下方式联系：

- 提交 GitHub Issue
- 发送邮件至项目维护者
