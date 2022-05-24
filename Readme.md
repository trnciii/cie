# OpenGL macOS 用テキスト

この教材は mkdocs というアプリケーション を利用して作られています。
mkdocs はマークダウンという読み書きしやすい形式で書かれたファイルから静的ウェブサイトを作ることができます。
本テキストをウェブサイトとして公開するにはビルドが必要です。

この文書では mkdocs の使い方と、教材のファイル構成について簡単に説明します。
それ以上の詳しい情報は以下や文章中で紹介するリンクを見てください。

* mkdocs トップ https://www.mkdocs.org/
* マークダウンの文法 https://qiita.com/kamorits/items/6f342da395ad57468ae3
* mkdocs のインストール https://www.mkdocs.org/user-guide/installation/
* ウェブサイトのビルド https://www.mkdocs.org/user-guide/deploying-your-docs/#other-providers
* フォルダの構成や設定について https://www.mkdocs.org/user-guide/writing-your-docs/

## インストール

https://www.mkdocs.org/user-guide/installation/

Python 環境が前提です。
パッケージマネージャの pip を使い、以下のコマンドで mkdocs をインストールします。
pip は Python と一緒にインストールされていると思います。

`$ pip install mkdocs`


## ビルド

html 等で構成されたウェブサイト用のファイル群へ変換する方法です。

https://www.mkdocs.org/user-guide/deploying-your-docs/#other-providers

このリポジトリ直下のディレクトリ `cie/` 内で以下のコマンドを使います。

`$ mkdocs build`

成功すると、出力は `cie/site` というフォルダの中にあります。
このフォルダごとサーバーの好きな場所に配置し、リンクを張るなどして通常の html ファイルと同じように利用できます。
また、フォルダごと学生に配布することも可能だと思います。


## ファイルの構成

mkdocs のための設定ファイルや、記事のソースファイルの配置について説明します。

https://www.mkdocs.org/user-guide/writing-your-docs/

この教材に必要はファイル以下のような構成で配置されています。

```
cie
├── mkdocs.yml (サイトの設定用ファイル)
└── docs
    ├── home-images/ (トップページ用の画像など)
    ├── index.md (トップページのソースファイル)
    └── <各回の記事フォルダ>
        ├── README.md (記事のソースファイル)
        └── <記事で使う画像など>
```

授業内容によって記事を追加・修正・削除したい場合があるかと思います。

記事を修正するには、 `cie/docs/<各回のフォルダ>/README.md` の内容を編集し、再ビルドしてください。

記事を追加するには、まず `cie/docs/` の下に新しくフォルダを追加します。
さらにそのフォルダの下に記事本体である `README.md` や使用する画像ファイルなどを配置してください。
記事が書けたら、`cie/mkdocs.yml` を編集してビルドの設定にこのフォルダを追加する必要があります。
ファイルは以下のように見えていると思いますが、`nav:` の要素として記事のタイトルとファイルの場所を追加してください。

```
site_name: コンテンツインタラクション演習
theme: readthedocs
nav:
  - Home: index.md
  - 環境構築: setup/README.md
  ...
  - <記事タイトル>: <ファイルの場所>
```

設定の更新ができたらウェブサイトを再ビルドしてください。

記事を削除（除外）するには、`cie/mkdocs.yml` を編集します。
以下のように見えていると思いますが、 `nav` の要素から該当の記事を除外してください。
必要であれば、 `cie/docs/ `下にある記事のソースファイルも削除してよいです。

```
site_name: コンテンツインタラクション演習
theme: readthedocs
nav:
  - Home: index.md
  - 環境構築: setup/README.md
  - 2D 線・円:
    - 直線: lines/README.md
    - 円: circle/README.md
  - 2D 相対移動: surface/README.md
  - 3D 階層構造: box/README.md
  - アニメーション: animation/README.md
  - マウスやキーボードによる入力: input/README.md
  - ワンクリックアクションの制作: oneclick/README.md
  - タイミングアクション: timing/README.md
  - 軌跡を用いたインタラクション: trace/README.md
```






