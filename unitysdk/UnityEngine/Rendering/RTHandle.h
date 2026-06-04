#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { class ScaleFunc; }

#define UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B17D890)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_NAMEID_OFFSET UNITYSDK_OFFSET(0x1B17D500)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B17D520)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1B17D490)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B17D4B0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_RT_OFFSET UNITYSDK_OFFSET(0x1B17D4F0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B17D450)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_USESCALING_OFFSET UNITYSDK_OFFSET(0x1B17D470)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B17D560)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B17D590)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B17D540)
#define UNITYENGINE_RENDERING_RTHANDLE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B17D740)
#define UNITYENGINE_RENDERING_RTHANDLE_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B17D5C0)
#define UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B17D680)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1B17D4A0)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B17D460)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_USESCALING_OFFSET UNITYSDK_OFFSET(0x1B17D480)
#define UNITYENGINE_RENDERING_RTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17D530)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandle_TypeDefinitionIndex = 33774;

	class RTHandle : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::RTHandleSystem* m_Owner; // 0x10
		::UnityEngine::Texture* m_ExternalTexture; // 0x18
		::UnityEngine::Rendering::ScaleFunc* scaleFunc; // 0x20
		::UnityEngine::RenderTexture* m_RT; // 0x28
		::System::String* m_Name; // 0x30
		::UnityEngine::Rendering::RenderTargetIdentifier m_NameID; // 0x38
		::UnityEngine::Vector2 _scaleFactor_k__BackingField; // 0x60
		::System::Boolean m_EnableHWDynamicScale; // 0x68
		::System::Boolean m_EnableRandomWrite; // 0x69
		::System::Boolean m_EnableMSAA; // 0x6A
		::System::Boolean _useScaling_k__BackingField; // 0x6B
		::UnityEngine::Vector2Int _referenceSize_k__BackingField; // 0x6C

		::System::Void _ctor(::UnityEngine::Rendering::RTHandleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_scaleFactor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_SCALEFACTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_useScaling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_USESCALING_OFFSET))(this);
		}

		::System::Void set_useScaling(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_USESCALING_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int get_referenceSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_REFERENCESIZE_OFFSET))(this);
		}

		::System::Void set_referenceSize(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_REFERENCESIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_rt()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_RT_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_nameID()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_NAMEID_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_NAME_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* op_Implicit(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Texture* op_Implicit_1(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_2(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		::System::Void SetRenderTexture(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETRENDERTEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_RELEASE_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET))(this, a1);
		}
	};
}
