#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE735C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE73600)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__ONENABLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1AE73610)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__ONENABLE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1AE73680)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeComponent___c_TypeDefinitionIndex = 6058;

	class VolumeComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent___c_TypeDefinitionIndex)->GetStaticField(0x4C90);
		}
		static ::UnityEngine::NAPRenderPipeline0::VolumeComponent___c** StaticGet___9()
		{
			return (::UnityEngine::NAPRenderPipeline0::VolumeComponent___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent___c_TypeDefinitionIndex)->GetStaticField(0x4C98);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent___c_TypeDefinitionIndex)->GetStaticField(0x4CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__15_0(::System::Reflection::FieldInfo* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__ONENABLE_B__15_0_OFFSET))(this, t);
		}

		::System::Int32 _OnEnable_b__15_1(::System::Reflection::FieldInfo* t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMECOMPONENT___C__ONENABLE_B__15_1_OFFSET))(this, t);
		}
	};
}
