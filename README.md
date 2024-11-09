这是一个基于easyx和c语言的小游戏，类似于曾经金山打字通的拯救苹果，只是做出个框架，后续完全可以通过调节速度来设计关卡。
把源.c文件内容复制到项目的c文件中，图片和音频复制到项目根目录下，点击EasyX_20240601来安装easyx到编译器上，最后运行即可。


# 游戏项目：知识混子

这是一个简单的图形界面游戏，使用 C++ 和 EasyX 图形库开发。游戏的目标是通过输入正确的字母来获得分数，同时可以通过键盘控制游戏的音乐和速度。

## 功能特点

- 随机字母下落，玩家输入正确的字母来增加分数。
- 支持音乐播放，包括播放、暂停和停止。
- 支持更换音乐曲目。
- 支持调整游戏速度，以增加游戏难度。
- 支持不同难度级别的设置。

## 运行环境

- Windows 操作系统
- C++ 编译器（如 Visual Studio、MinGW）
- EasyX 图形库
- Windows 多媒体库（用于音乐播放）

## 编译和运行

1. 确保你的开发环境已经安装了 C++ 编译器和 EasyX 图形库。
2. 将源代码复制到你的开发环境中。
3. 编译源代码，生成可执行文件。
4. 运行可执行文件，开始游戏。

## 游戏控制

- 按 `1` 加速游戏。
- 按 `2` 再加速。
- 按 `3` 更换音乐。
- 按 `4` 设置困难难度。
- 按 `5` 设置地狱难度。
- 按 `6` 亚洲模式（可能意味着更高难度）。
- 按 `7` 继续播放音乐。
- 按 `8` 暂停音乐。
- 按 `9` 关闭音乐。
- 输入与下落字母相同的键来增加分数。

## 注意事项

- 确保游戏运行时，音乐文件 `Experience.mp3` 和 `lullaby.mp3` 位于程序的同一目录下。
- 图片文件 `烟绯.jpg`、`011.jpg` 和 `001.jpg` 也需要位于程序的同一目录下，以确保游戏能够正确加载资源。

## 代码结构

- `main()` 函数：游戏的主入口，显示主菜单，处理用户输入。
- `ONE()` 函数：游戏的主要逻辑，处理游戏循环、分数计算和音乐控制。

## 版权和许可

本项目为开源项目，你可以自由地修改和分发代码，但请保留原作者的版权信息。具体的许可信息请参考项目的 `LICENSE` 文件。

---

希望这个 `README.md` 文件能够帮助你更好地理解和使用这个项目。如果你有任何问题或需要进一步的帮助，请随时联系我。
