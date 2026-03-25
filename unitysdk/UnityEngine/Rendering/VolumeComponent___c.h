#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FE7C0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188FE7F0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x188FE800)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x188FE870)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponent___c_TypeDefinitionIndex = 27905;

	class VolumeComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent___c_TypeDefinitionIndex)->GetStaticField(0x20A50);
		}
		static ::UnityEngine::Rendering::VolumeComponent___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::VolumeComponent___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent___c_TypeDefinitionIndex)->GetStaticField(0x20A58);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent___c_TypeDefinitionIndex)->GetStaticField(0x20A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__10_0(::System::Reflection::FieldInfo* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_0_OFFSET))(this, t);
		}

		::System::Int32 _OnEnable_b__10_1(::System::Reflection::FieldInfo* t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_1_OFFSET))(this, t);
		}
	};
}
