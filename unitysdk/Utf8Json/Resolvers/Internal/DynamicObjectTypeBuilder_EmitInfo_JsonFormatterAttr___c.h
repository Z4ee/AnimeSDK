#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONFORMATTERATTR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F915A30)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONFORMATTERATTR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F915A70)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr___c_TypeDefinitionIndex = 95082;

	class DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr___c : public ::System::Object
	{
	public:
		static ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr___c** StaticGet___9()
		{
			return (::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr___c_TypeDefinitionIndex)->GetStaticField(0x533E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONFORMATTERATTR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONFORMATTERATTR___C__CTOR_OFFSET))(this);
		}
	};
}
