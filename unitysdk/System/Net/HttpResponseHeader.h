#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpResponseHeader_TypeDefinitionIndex = 3279;

	enum class HttpResponseHeader : ::System::Int32
	{
		CacheControl = 0,
		Connection = 1,
		Date = 2,
		KeepAlive = 3,
		Pragma = 4,
		Trailer = 5,
		TransferEncoding = 6,
		Upgrade = 7,
		Via = 8,
		Warning = 9,
		Allow = 10,
		ContentLength = 11,
		ContentType = 12,
		ContentEncoding = 13,
		ContentLanguage = 14,
		ContentLocation = 15,
		ContentMd5 = 16,
		ContentRange = 17,
		Expires = 18,
		LastModified = 19,
		AcceptRanges = 20,
		Age = 21,
		ETag = 22,
		Location = 23,
		ProxyAuthenticate = 24,
		RetryAfter = 25,
		Server = 26,
		SetCookie = 27,
		Vary = 28,
		WwwAuthenticate = 29,
	};
}
