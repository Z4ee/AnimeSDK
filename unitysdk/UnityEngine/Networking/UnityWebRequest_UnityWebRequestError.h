#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequest_UnityWebRequestError_TypeDefinitionIndex = 5362;

	enum class UnityWebRequest_UnityWebRequestError : ::System::Int32
	{
		OK = 0,
		Unknown = 1,
		SDKError = 2,
		UnsupportedProtocol = 3,
		MalformattedUrl = 4,
		CannotResolveProxy = 5,
		CannotResolveHost = 6,
		CannotConnectToHost = 7,
		AccessDenied = 8,
		GenericHttpError = 9,
		WriteError = 10,
		ReadError = 11,
		OutOfMemory = 12,
		Timeout = 13,
		HTTPPostError = 14,
		SSLCannotConnect = 15,
		Aborted = 16,
		TooManyRedirects = 17,
		ReceivedNoData = 18,
		SSLNotSupported = 19,
		FailedToSendData = 20,
		FailedToReceiveData = 21,
		SSLCertificateError = 22,
		SSLCipherNotAvailable = 23,
		SSLCACertError = 24,
		UnrecognizedContentEncoding = 25,
		LoginFailed = 26,
		SSLShutdownFailed = 27,
		NoInternetConnection = 28,
	};
}
