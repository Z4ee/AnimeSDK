#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95EE20)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F95EE60)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F95EE70)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C___CCTOR_B__18_1_OFFSET UNITYSDK_OFFSET(0x1F95EEB0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo___c_TypeDefinitionIndex = 95083;

	class DynamicObjectTypeBuilder_EmitInfo___c : public ::System::Object
	{
	public:
		static ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_EmitInfo___c** StaticGet___9()
		{
			return (::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_EmitInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo___c_TypeDefinitionIndex)->GetStaticField(0x533A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__18_0(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C___CCTOR_B__18_0_OFFSET))(this, x);
		}

		::System::Boolean __cctor_b__18_1(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO___C___CCTOR_B__18_1_OFFSET))(this, x);
		}
	};
}
