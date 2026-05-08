#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F30920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F30960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS___C__RECURSIVECOPYBASETYPEPRIVATEFIELDS_B__6_0_OFFSET UNITYSDK_OFFSET(0x19F30970)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ObjectExtensions___c_TypeDefinitionIndex = 30370;

	class ObjectExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectExtensions___c_TypeDefinitionIndex)->GetStaticField(0x23B00);
		}
		static ::UnityEngine::Rendering::Universal::Internal::ObjectExtensions___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::Internal::ObjectExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectExtensions___c_TypeDefinitionIndex)->GetStaticField(0x23B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RecursiveCopyBaseTypePrivateFields_b__6_0(::System::Reflection::FieldInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS___C__RECURSIVECOPYBASETYPEPRIVATEFIELDS_B__6_0_OFFSET))(this, info);
		}
	};
}
