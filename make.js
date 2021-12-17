require("fs")
  .readdirSync("src")
  .filter((file) => file.endsWith(".c"))
  .map((file) => file.split(".").shift())
  .forEach((file) =>
    require("child_process").execSync(`gcc src/${file}.c -o build/${file}`)
  );
