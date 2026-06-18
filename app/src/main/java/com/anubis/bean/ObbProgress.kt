package com.anubis.bean

data class ObbProgress(
    val percent: Int,
    val copiedBytes: Long,
    val totalBytes: Long,
    val fileName: String
)
