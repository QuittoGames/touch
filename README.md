# touch

# Touch em C++

touch command Linux for Windows with C++

---

## Como compilar

No terminal (cmd ou PowerShell), navegue até o diretório do projeto e rode:

```bash
g++ index.cpp -o touch.exe
```

---

## Como usar

No PowerShell ou cmd, execute o programa assim (atenção ao `.\` no PowerShell):

```powershell
.\touch.exe nome_do_arquivo.ext
```

Exemplo:

```powershell
.\touch.exe teste.py
```

---

## Como adicionar ao PATH (Windows)

Para facilitar a execução do comando de qualquer lugar:

1. Mova ou copie o arquivo `touch.exe` para uma pasta de sua preferência (exemplo: `C:\tools\touch`).

2. Adicione essa pasta ao PATH do Windows:

   - Pressione `Win + R`, digite `sysdm.cpl` e pressione Enter.
   - Vá na aba **Avançado** > **Variáveis de Ambiente**.
   - Em **Variáveis do sistema**, selecione a variável `Path` e clique em **Editar**.
   - Clique em **Novo** e adicione o caminho completo da pasta, ex: `C:\tools\touch`.
   - Clique em OK para fechar todas as janelas.

3. Agora abra um novo terminal e rode:

```powershell
touch.exe nome_do_arquivo.ext
```

---

## Uso do `touch.bat`

Você também pode criar um arquivo `touch.bat` para facilitar a execução local:

Conteúdo do `touch.bat`:

```bat
@echo off
.\touch.exe %*
```

Coloque o `touch.bat` na mesma pasta do `touch.exe` e execute o comando no terminal como:

```powershell
touch.bat nome_do_arquivo.ext
```

---

## Observações

- O programa apenas cria um arquivo vazio com o nome passado.
- Caso o arquivo já exista, ele será sobrescrito (esvaziado).
- Para criar arquivos em pastas específicas, passe o caminho completo no nome do arquivo.

---
