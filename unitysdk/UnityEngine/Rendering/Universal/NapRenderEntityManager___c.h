#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class NapRenderEntity;
namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC32F60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC32FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATELIGHTDATA_B__93_8_OFFSET UNITYSDK_OFFSET(0x1BC32FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATEPERFRAME_B__88_0_OFFSET UNITYSDK_OFFSET(0x1BC32FB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager___c_TypeDefinitionIndex = 26250;

	class NapRenderEntityManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>** StaticGet___9__93_8()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager___c_TypeDefinitionIndex)->GetStaticField(0x20950);
		}
		static ::System::Comparison_1<::NapRenderEntity*>** StaticGet___9__88_0()
		{
			return (::System::Comparison_1<::NapRenderEntity*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager___c_TypeDefinitionIndex)->GetStaticField(0x20958);
		}
		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderEntityManager___c**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager___c_TypeDefinitionIndex)->GetStaticField(0x20960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdatePerFrame_b__88_0(::NapRenderEntity* a, ::NapRenderEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NapRenderEntity*, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATEPERFRAME_B__88_0_OFFSET))(this, a, b);
		}

		::System::Int32 _UpdateLightData_b__93_8(::System::ValueTuple_2<::System::Int32, ::System::Single> a, ::System::ValueTuple_2<::System::Int32, ::System::Single> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Single>, ::System::ValueTuple_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATELIGHTDATA_B__93_8_OFFSET))(this, a, b);
		}
	};
}
