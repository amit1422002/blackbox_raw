#!/usr/bin/env python3
"""Merge BGMIGameMod.lua + BGMIGameModBody.lua into assets/bgmi_game_mod.lua."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
assets = ROOT / "app/src/main/assets"
boot = (assets / "BGMIGameMod.lua").read_text(encoding="utf-8")
body = (assets / "BGMIGameModBody.lua").read_text(encoding="utf-8")
tail = "\npcall(function() if _G.ApplyBgmiGameMod then _G.ApplyBgmiGameMod() end end)\n"
out = assets / "bgmi_game_mod.lua"
out.write_text(boot + "\n" + body + tail, encoding="utf-8")
print(f"wrote {out} ({out.stat().st_size} bytes)")
