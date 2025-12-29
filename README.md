# Cross-platform Beep Sound in C 🚀

Simple **Windows/Linux** beep utility designed as a **component** for your programs (not standalone executable).

## 📁 Project Structure
```
play-sound/
├── example.c          # Simple usage example
├── linux/
│   ├── sound.h       # void beep(int freq, int duration_ms);
│   └── sound.c       # Linux implementation (requires `beep`)
└── windows/
    ├── sound.h       # Same interface
    └── sound.c       # Windows implementation
```

## 💡 Usage

**Include in your project** and compile with platform-specific sound.c:

### Linux
```bash
sudo pacman -S beep  # or sudo apt install beep
gcc your_program.c linux/sound.c -o your_program
./your_program
```

### Windows (MinGW)
```bash
gcc your_program.c windows/sound.c -lwinmm -o your_program.exe
./your_program.exe
```

## 💻 Example (example.c)
```c
#include "linux/sound.h"  // or "windows/sound.h"

int main() {
    beep(800, 200);  // 800Hz, 200ms
    return 0;
}
```

**Compile example:**
```bash
gcc example.c linux/sound.c -o example  # Linux
gcc example.c windows/sound.c -lwinmm -o example.exe  # Windows
```

## 🎵 Interface
```c
void beep(int freq, int duration_ms);  // Hz, milliseconds
```

## ❌ Troubleshooting

**Linux no sound:**
```bash
sudo pacman -S beep    # Install beep utility!
beep -f 800 -l 200     # Test
```

**"undefined reference to beep"**
```
gcc your_program.c linux/sound.c -o program  # Include sound.c!
```

**Windows linking:**
```
gcc ... -lwinmm
```
