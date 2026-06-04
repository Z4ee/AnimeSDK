#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/NormalsMode.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TangentsMode.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xD530)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_FLIPFACES_OFFSET UNITYSDK_OFFSET(0x138420)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTLINEPOLYGON_OFFSET UNITYSDK_OFFSET(0x2BC0BA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTPOINTPOLYGON_OFFSET UNITYSDK_OFFSET(0x3873EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTTRIANGLEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3873F20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_INTERPOLATESAMPLES_OFFSET UNITYSDK_OFFSET(0x3873ED0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_NORMALSMODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xD510)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SPLITUNIT_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x89B40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_TANGENTSMODE_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_VERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x802E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x3873F40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xD540)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_FLIPFACES_OFFSET UNITYSDK_OFFSET(0x138430)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTLINEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3873F10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTPOINTPOLYGON_OFFSET UNITYSDK_OFFSET(0x3873F00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTTRIANGLEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3873F30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_INTERPOLATESAMPLES_OFFSET UNITYSDK_OFFSET(0x3873EE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_NORMALSMODE_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xD520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SPLITUNIT_OFFSET UNITYSDK_OFFSET(0x6F00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x89B50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_TANGENTSMODE_OFFSET UNITYSDK_OFFSET(0x21F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_VERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x802F0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiConfig_TypeDefinitionIndex = 41625;

	struct alignas(4) aiConfig
	{
		::UnityEngine::Formats::Alembic::Sdk::NormalsMode _normalsMode_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::TangentsMode _tangentsMode_k__BackingField; // 0x14
		::System::Single _scaleFactor_k__BackingField; // 0x18
		::System::Single _aspectRatio_k__BackingField; // 0x1C
		::System::Single _vertexMotionScale_k__BackingField; // 0x20
		::System::Int32 _splitUnit_k__BackingField; // 0x24
		::UnityEngine::Formats::Alembic::Sdk::Bool _swapHandedness_k__BackingField; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::Bool _flipFaces_k__BackingField; // 0x29
		::UnityEngine::Formats::Alembic::Sdk::Bool _interpolateSamples_k__BackingField; // 0x2A
		::UnityEngine::Formats::Alembic::Sdk::Bool _importPointPolygon_k__BackingField; // 0x2B
		::UnityEngine::Formats::Alembic::Sdk::Bool _importLinePolygon_k__BackingField; // 0x2C
		::UnityEngine::Formats::Alembic::Sdk::Bool _importTrianglePolygon_k__BackingField; // 0x2D

		::UnityEngine::Formats::Alembic::Sdk::NormalsMode get_normalsMode()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::NormalsMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_NORMALSMODE_OFFSET))(this);
		}

		::System::Void set_normalsMode(::UnityEngine::Formats::Alembic::Sdk::NormalsMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::NormalsMode))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_NORMALSMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::TangentsMode get_tangentsMode()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TangentsMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_TANGENTSMODE_OFFSET))(this);
		}

		::System::Void set_tangentsMode(::UnityEngine::Formats::Alembic::Sdk::TangentsMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TangentsMode))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_TANGENTSMODE_OFFSET))(this, a1);
		}

		::System::Single get_scaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SCALEFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_aspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_ASPECTRATIO_OFFSET))(this, a1);
		}

		::System::Single get_vertexMotionScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_VERTEXMOTIONSCALE_OFFSET))(this);
		}

		::System::Void set_vertexMotionScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_VERTEXMOTIONSCALE_OFFSET))(this, a1);
		}

		::System::Int32 get_splitUnit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SPLITUNIT_OFFSET))(this);
		}

		::System::Void set_splitUnit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SPLITUNIT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_swapHandedness()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SWAPHANDEDNESS_OFFSET))(this);
		}

		::System::Void set_swapHandedness(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SWAPHANDEDNESS_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_flipFaces()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_FLIPFACES_OFFSET))(this);
		}

		::System::Void set_flipFaces(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_FLIPFACES_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_interpolateSamples()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_INTERPOLATESAMPLES_OFFSET))(this);
		}

		::System::Void set_interpolateSamples(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_INTERPOLATESAMPLES_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_importPointPolygon()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTPOINTPOLYGON_OFFSET))(this);
		}

		::System::Void set_importPointPolygon(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTPOINTPOLYGON_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_importLinePolygon()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTLINEPOLYGON_OFFSET))(this);
		}

		::System::Void set_importLinePolygon(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTLINEPOLYGON_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_importTrianglePolygon()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTTRIANGLEPOLYGON_OFFSET))(this);
		}

		::System::Void set_importTrianglePolygon(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTTRIANGLEPOLYGON_OFFSET))(this, a1);
		}

		::System::Void SetDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SETDEFAULTS_OFFSET))(this);
		}
	};
}
