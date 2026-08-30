#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/NormalsMode.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TangentsMode.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xD510)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_FLIPFACES_OFFSET UNITYSDK_OFFSET(0x14AD20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTLINEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3BABBD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTPOINTPOLYGON_OFFSET UNITYSDK_OFFSET(0x3BABBB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_IMPORTTRIANGLEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3BABBF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_INTERPOLATESAMPLES_OFFSET UNITYSDK_OFFSET(0x3BABB90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_NORMALSMODE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SPLITUNIT_OFFSET UNITYSDK_OFFSET(0x6E40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x8F1B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_TANGENTSMODE_OFFSET UNITYSDK_OFFSET(0x1E120)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_GET_VERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x821F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x3BABC10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xD520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_FLIPFACES_OFFSET UNITYSDK_OFFSET(0x14AD30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTLINEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3BABBE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTPOINTPOLYGON_OFFSET UNITYSDK_OFFSET(0x3BABBC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_IMPORTTRIANGLEPOLYGON_OFFSET UNITYSDK_OFFSET(0x3BABC00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_INTERPOLATESAMPLES_OFFSET UNITYSDK_OFFSET(0x3BABBA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_NORMALSMODE_OFFSET UNITYSDK_OFFSET(0x2E950)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xD500)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SPLITUNIT_OFFSET UNITYSDK_OFFSET(0x6E50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x8F1C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_TANGENTSMODE_OFFSET UNITYSDK_OFFSET(0x2200)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONFIG_SET_VERTEXMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0x82200)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiConfig_TypeDefinitionIndex = 44667;

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
