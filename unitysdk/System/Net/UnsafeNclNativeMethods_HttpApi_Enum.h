#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int UnsafeNclNativeMethods_HttpApi_Enum_TypeDefinitionIndex = 3484;

	enum class UnsafeNclNativeMethods_HttpApi_Enum : ::System::Int32
	{
		HttpHeaderCacheControl = 0,
		HttpHeaderConnection = 1,
		HttpHeaderDate = 2,
		HttpHeaderKeepAlive = 3,
		HttpHeaderPragma = 4,
		HttpHeaderTrailer = 5,
		HttpHeaderTransferEncoding = 6,
		HttpHeaderUpgrade = 7,
		HttpHeaderVia = 8,
		HttpHeaderWarning = 9,
		HttpHeaderAllow = 10,
		HttpHeaderContentLength = 11,
		HttpHeaderContentType = 12,
		HttpHeaderContentEncoding = 13,
		HttpHeaderContentLanguage = 14,
		HttpHeaderContentLocation = 15,
		HttpHeaderContentMd5 = 16,
		HttpHeaderContentRange = 17,
		HttpHeaderExpires = 18,
		HttpHeaderLastModified = 19,
		HttpHeaderAcceptRanges = 20,
		HttpHeaderAge = 21,
		HttpHeaderEtag = 22,
		HttpHeaderLocation = 23,
		HttpHeaderProxyAuthenticate = 24,
		HttpHeaderRetryAfter = 25,
		HttpHeaderServer = 26,
		HttpHeaderSetCookie = 27,
		HttpHeaderVary = 28,
		HttpHeaderWwwAuthenticate = 29,
		HttpHeaderResponseMaximum = 30,
		HttpHeaderMaximum = 41,
	};
}
