#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ParsingError_TypeDefinitionIndex = 2466;

	enum class ParsingError : ::System::Int32
	{
		None = 0,
		BadFormat = 1,
		BadScheme = 2,
		BadAuthority = 3,
		EmptyUriString = 4,
		LastRelativeUriOkErrIndex = 4,
		SchemeLimit = 5,
		SizeLimit = 6,
		MustRootedPath = 7,
		BadHostName = 8,
		NonEmptyHost = 9,
		BadPort = 10,
		BadAuthorityTerminator = 11,
		CannotCreateRelative = 12,
	};
}
