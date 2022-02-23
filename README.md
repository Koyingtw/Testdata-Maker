# Testdata-Maker
測資生成器

## 簡介

本生成器可以幫助您快速的生成比賽所需的 input/output 檔


## `inputmaker.cpp`

### 主要設定

#### `dir_name`

設定輸入檔資料夾路徑

#### `fileId`

代表目前建立到編號為 `fileId - 1` 的輸入檔

#### `MAKE`

若定義 `MAKE = 1` 則代表目前要進行測資生成，使用 `cout` 將直接進行檔案寫入

#### `N`

生成的檔案數量

### 主要函式

#### `start()`

本函式會自動搜尋 `dir_name` 所指向資料夾中的 `.in` 檔案，並且自動偵測並建立 `.in` 檔，其檔名為未被建立的編號中的最小編號，例如目前資料夾中有 `00.in`, `01.in`, `02.in`, `03.in`，那麼程式便會自動生成 `04.in`

#### `randint()`

本函式提供一個隨機的整數

#### `randfloat()`

本函式提供一個隨機的浮點數

#### `make()`

本函式為此程式的核心函式，程式將在此處理測資檔的生成
以下是一支生成長度 $\le$ 100 且元素 $< 10^9$ 的正整數數列的參考程式：

```cpp
void make() {
    int n = randint() % 100 + 1;
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << randint() % (int)(1e9) << " ";
    }
    cout << endl;
}
```

## `outputmaker.cpp`

### 主要設定

#### `indir`、`outdir`

設定輸入測資以及所要生成的答案目標位置

#### `MAKE`

若 `MAKE` = 1 則答案的輸出將直接寫入至 `outdir` 資料夾中

#### `N`

測資數量

### 主要函式

#### `start()`

同 `inpurmaker.cpp`

#### `sol()`

程式預設的解答函式

#### 其餘皆與 `inputmaker.cpp` 相似

### 使用方法

將官方解答的函式（系統預設將運行 `sol()`）放入 `solution space` 中，直接運行將可得 `N` 筆答案