#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriSyntaxFlags_TypeDefinitionIndex = 2477;

	enum class UriSyntaxFlags : ::System::Int32
	{
		None = 0,
		MustHaveAuthority = 1,
		OptionalAuthority = 2,
		MayHaveUserInfo = 4,
		MayHavePort = 8,
		MayHavePath = 16,
		MayHaveQuery = 32,
		MayHaveFragment = 64,
		AllowEmptyHost = 128,
		AllowUncHost = 256,
		AllowDnsHost = 512,
		AllowIPv4Host = 1024,
		AllowIPv6Host = 2048,
		AllowAnInternetHost = 3584,
		AllowAnyOtherHost = 4096,
		FileLikeUri = 8192,
		MailToLikeUri = 16384,
		V1_UnknownUri = 65536,
		SimpleUserSyntax = 131072,
		BuiltInSyntax = 262144,
		ParserSchemeOnly = 524288,
		AllowDOSPath = 1048576,
		PathIsRooted = 2097152,
		ConvertPathSlashes = 4194304,
		CompressPath = 8388608,
		CanonicalizeAsFilePath = 16777216,
		UnEscapeDotsAndSlashes = 33554432,
		AllowIdn = 67108864,
		AllowIriParsing = 268435456,
	};
}
