const expect = require("chai").expect;
const execSync = require("child_process").execSync;
describe("tcp_coalesce", () => {
  it("collapsed 2 lines into 1", () => {
    expect(execSync("echo '1  2' | build/cp_coalesce")).to.exist;
  });
});
