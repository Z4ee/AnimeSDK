#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings_Anchor.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings_Fill.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1E140)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_DEFAULTAUTOUNWRAPSETTINGS_OFFSET UNITYSDK_OFFSET(0x187BB220)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FILL_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FIT_OFFSET UNITYSDK_OFFSET(0x187BB420)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FLIPU_OFFSET UNITYSDK_OFFSET(0x20FB900)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FLIPV_OFFSET UNITYSDK_OFFSET(0x20D55F0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x13C40)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1639980)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_STRETCH_OFFSET UNITYSDK_OFFSET(0x187BB450)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_SWAPUV_OFFSET UNITYSDK_OFFSET(0x20D5600)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_TILE_OFFSET UNITYSDK_OFFSET(0x187BB3F0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x29C50)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_RESET_OFFSET UNITYSDK_OFFSET(0x21073D0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x3DA00)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_FILL_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_FLIPU_OFFSET UNITYSDK_OFFSET(0x2105EB0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_FLIPV_OFFSET UNITYSDK_OFFSET(0x2105EC0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x6E270)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_SWAPUV_OFFSET UNITYSDK_OFFSET(0x2106990)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x791D0)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2107400)
#define UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2107390)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int AutoUnwrapSettings_TypeDefinitionIndex = 34068;

	struct alignas(4) AutoUnwrapSettings
	{
		::System::Boolean m_UseWorldSpace; // 0x10
		::System::Boolean m_FlipU; // 0x11
		::System::Boolean m_FlipV; // 0x12
		::System::Boolean m_SwapUV; // 0x13
		::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill m_Fill; // 0x14
		::UnityEngine::Vector2 m_Scale; // 0x18
		::UnityEngine::Vector2 m_Offset; // 0x20
		::System::Single m_Rotation; // 0x28
		::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor m_Anchor; // 0x2C

		::System::Void _ctor(::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS__CTOR_OFFSET))(this, unwrapSettings);
		}

		static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_DEFAULTAUTOUNWRAPSETTINGS_OFFSET))();
		}

		::System::Boolean get_useWorldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_USEWORLDSPACE_OFFSET))(this);
		}

		::System::Void set_useWorldSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_USEWORLDSPACE_OFFSET))(this, value);
		}

		::System::Boolean get_flipU()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FLIPU_OFFSET))(this);
		}

		::System::Void set_flipU(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_FLIPU_OFFSET))(this, value);
		}

		::System::Boolean get_flipV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FLIPV_OFFSET))(this);
		}

		::System::Void set_flipV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_FLIPV_OFFSET))(this, value);
		}

		::System::Boolean get_swapUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_SWAPUV_OFFSET))(this);
		}

		::System::Void set_swapUV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_SWAPUV_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill get_fill()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FILL_OFFSET))(this);
		}

		::System::Void set_fill(::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_FILL_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_scale()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_SCALE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_OFFSET_OFFSET))(this, value);
		}

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor get_anchor()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_anchor(::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_SET_ANCHOR_OFFSET))(this, value);
		}

		static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_tile()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_TILE_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_fit()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_FIT_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_GET_STRETCH_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_AUTOUNWRAPSETTINGS_TOSTRING_OFFSET))(this);
		}
	};
}
