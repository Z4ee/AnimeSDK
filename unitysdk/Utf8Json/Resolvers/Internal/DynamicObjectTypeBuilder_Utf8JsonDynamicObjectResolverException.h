#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_UTF8JSONDYNAMICOBJECTRESOLVEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5230C0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_Utf8JsonDynamicObjectResolverException_TypeDefinitionIndex = 85577;

	class DynamicObjectTypeBuilder_Utf8JsonDynamicObjectResolverException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_UTF8JSONDYNAMICOBJECTRESOLVEREXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
