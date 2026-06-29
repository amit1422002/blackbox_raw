// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum SolarlandResUpdate.EDownloadTaskError
enum class EDownloadTaskError : uint8_t
{
	ConnectFailed = 0,
	RequestHeadFailed = 1,
	CreateFileFailed = 2,
	DownloadFailed = 3,
	WriteFailed = 4,
	DeleteOldFailed = 5,
	MoveFailed = 6,
	CreateDownloadTaskFail = 7,
	GetPlatformFileFail = 8,
	GetWrongJsonFormat = 9,
	TempNotExist = 10,
	WrongSize = 11,
	HttpResponseInvalid = 12,
	EDownloadTaskError_MAX = 13
};

} // namespace SDK
