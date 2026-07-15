#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpRequestHeader_TypeDefinitionIndex = 2730;

	enum class HttpRequestHeader : ::System::Int32
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
		Accept = 20,
		AcceptCharset = 21,
		AcceptEncoding = 22,
		AcceptLanguage = 23,
		Authorization = 24,
		Cookie = 25,
		Expect = 26,
		From = 27,
		Host = 28,
		IfMatch = 29,
		IfModifiedSince = 30,
		IfNoneMatch = 31,
		IfRange = 32,
		IfUnmodifiedSince = 33,
		MaxForwards = 34,
		ProxyAuthorization = 35,
		Referer = 36,
		Range = 37,
		Te = 38,
		Translate = 39,
		UserAgent = 40,
	};
}
