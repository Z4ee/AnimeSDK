#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Camera; }
namespace VLB { class BeamGeometry; }

#define VLB_BEAMGEOMETRY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC37560)
#define VLB_BEAMGEOMETRY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC37590)
#define VLB_BEAMGEOMETRY___C__GET_ONBEGINCAMERARENDERINGHANDLER_B__29_0_OFFSET UNITYSDK_OFFSET(0xAC375A0)

namespace VLB
{
	inline static constexpr unsigned int BeamGeometry___c_TypeDefinitionIndex = 39687;

	class BeamGeometry___c : public ::System::Object
	{
	public:
		static ::VLB::BeamGeometry___c** StaticGet___9()
		{
			return (::VLB::BeamGeometry___c**)Il2CppClass::FromTypeDefinitionIndex(BeamGeometry___c_TypeDefinitionIndex)->GetStaticField(0x5B40);
		}
		static ::System::Action_3<::VLB::BeamGeometry*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>** StaticGet___9__29_0()
		{
			return (::System::Action_3<::VLB::BeamGeometry*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(BeamGeometry___c_TypeDefinitionIndex)->GetStaticField(0x5B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY___C__CTOR_OFFSET))(this);
		}

		::System::Void _get_OnBeginCameraRenderingHandler_b__29_0(::VLB::BeamGeometry* self, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* c)
		{
			return ((::System::Void(*)(::PVOID, ::VLB::BeamGeometry*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY___C__GET_ONBEGINCAMERARENDERINGHANDLER_B__29_0_OFFSET))(this, self, context, c);
		}
	};
}
