#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandleSystem; }
namespace UnityEngine::NAPRenderPipeline0 { class ScaleFunc; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1EB56E40)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_NAMEID_OFFSET UNITYSDK_OFFSET(0x1EB56810)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1EB567A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EB567C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_RT_OFFSET UNITYSDK_OFFSET(0x1EB56800)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1EB56760)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_USESCALING_OFFSET UNITYSDK_OFFSET(0x1EB56780)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EB56860)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1EB569A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EB56840)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EB56D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EB569D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EB56CB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1EB567B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1EB56770)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SET_USESCALING_OFFSET UNITYSDK_OFFSET(0x1EB56790)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB56830)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTHandle_TypeDefinitionIndex = 5956;

	class RTHandle : public ::System::Object
	{
	public:
		::UnityEngine::NAPRenderPipeline0::RTHandleSystem* m_Owner; // 0x10
		::UnityEngine::RenderTexture* m_RT; // 0x18
		::UnityEngine::Texture* m_ExternalTexture; // 0x20
		::UnityEngine::Rendering::RenderTargetIdentifier m_NameID; // 0x28
		::System::Boolean m_EnableMSAA; // 0x50
		::System::Boolean m_EnableRandomWrite; // 0x51
		::System::Boolean m_EnableHWDynamicScale; // 0x52
		::System::String* m_Name; // 0x58
		::UnityEngine::Vector2 _scaleFactor_k__BackingField; // 0x60
		::UnityEngine::NAPRenderPipeline0::ScaleFunc* scaleFunc; // 0x68
		::System::Boolean _useScaling_k__BackingField; // 0x70
		::UnityEngine::Vector2Int _referenceSize_k__BackingField; // 0x74

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RTHandleSystem* owner)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE__CTOR_OFFSET))(this, owner);
		}

		::UnityEngine::Vector2 get_scaleFactor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SET_SCALEFACTOR_OFFSET))(this, value);
		}

		::System::Boolean get_useScaling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_USESCALING_OFFSET))(this);
		}

		::System::Void set_useScaling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SET_USESCALING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int get_referenceSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_REFERENCESIZE_OFFSET))(this);
		}

		::System::Void set_referenceSize(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SET_REFERENCESIZE_OFFSET))(this, value);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_rt()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_RT_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_nameID()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GET_NAMEID_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* op_Implicit(::UnityEngine::NAPRenderPipeline0::RTHandle* handle)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_OP_IMPLICIT_OFFSET))(handle);
		}

		static ::UnityEngine::Texture* op_Implicit_1(::UnityEngine::NAPRenderPipeline0::RTHandle* handle)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_OP_IMPLICIT_1_OFFSET))(handle);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_2(::UnityEngine::NAPRenderPipeline0::RTHandle* handle)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_OP_IMPLICIT_2_OFFSET))(handle);
		}

		::System::Void SetRenderTexture(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SETRENDERTEXTURE_OFFSET))(this, rt);
		}

		::System::Void SetTexture(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_SETTEXTURE_OFFSET))(this, tex);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_RELEASE_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int refSize)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLE_GETSCALEDSIZE_OFFSET))(this, refSize);
		}
	};
}
