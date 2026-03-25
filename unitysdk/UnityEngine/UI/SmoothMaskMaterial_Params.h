#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params_DirtyFlagBit.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_Type.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_CLEARDIRTY_OFFSET UNITYSDK_OFFSET(0x212A1E0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x212A200)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x212A210)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x212A1B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_CANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x2129F60)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_ENABELTEXSLICED_OFFSET UNITYSDK_OFFSET(0x212A190)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_FILLPARAMS2_OFFSET UNITYSDK_OFFSET(0x212A070)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_FILLPARAMS_OFFSET UNITYSDK_OFFSET(0x212A010)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_REVERSEMASK_OFFSET UNITYSDK_OFFSET(0x888B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_SOFTRANGES_OFFSET UNITYSDK_OFFSET(0x2129FC0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXSLICE0_OFFSET UNITYSDK_OFFSET(0x212A0D0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXSLICE1_OFFSET UNITYSDK_OFFSET(0x212A130)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXTUREST_OFFSET UNITYSDK_OFFSET(0x1515D70)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x212A1F0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x212A1D0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_ASPECT_OFFSET UNITYSDK_OFFSET(0x212A1C0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_CANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x2129F90)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_ENABELTEXSLICED_OFFSET UNITYSDK_OFFSET(0x212A1A0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_FILLPARAMS2_OFFSET UNITYSDK_OFFSET(0x212A080)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_FILLPARAMS_OFFSET UNITYSDK_OFFSET(0x212A020)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_REVERSEMASK_OFFSET UNITYSDK_OFFSET(0x2129E90)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_SOFTRANGES_OFFSET UNITYSDK_OFFSET(0x2129FD0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXSLICE0_OFFSET UNITYSDK_OFFSET(0x212A0E0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXSLICE1_OFFSET UNITYSDK_OFFSET(0x212A140)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXTUREST_OFFSET UNITYSDK_OFFSET(0x21056B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x2129F10)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x2129E80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_Params_TypeDefinitionIndex = 5723;

	struct alignas(8) SmoothMaskMaterial_Params
	{
		::UnityEngine::UI::SmoothMask_Type _type; // 0x10
		::System::Boolean _invertMask; // 0x14
		::UnityEngine::Texture* _texture; // 0x18
		::UnityEngine::Vector4 _textureST; // 0x20
		::UnityEngine::Matrix4x4 _canvasToClipMatrix; // 0x30
		::UnityEngine::Vector4 _softRanges; // 0x70
		::UnityEngine::Vector4 _fillParams; // 0x80
		::UnityEngine::Vector4 _fillParams2; // 0x90
		::UnityEngine::Vector4 _texSlice0; // 0xA0
		::UnityEngine::Vector4 _texSlice1; // 0xB0
		::System::Boolean _enabelTexSliced_k__BackingField; // 0xC0
		::System::Single _aspect_k__BackingField; // 0xC4
		::System::Int32 dirtyFlag; // 0xC8

		::UnityEngine::UI::SmoothMask_Type get_type()
		{
			return ((::UnityEngine::UI::SmoothMask_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::UI::SmoothMask_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_reverseMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_REVERSEMASK_OFFSET))(this);
		}

		::System::Void set_reverseMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_REVERSEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_textureST()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXTUREST_OFFSET))(this);
		}

		::System::Void set_textureST(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXTUREST_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_canvasToClipMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_CANVASTOCLIPMATRIX_OFFSET))(this);
		}

		::System::Void set_canvasToClipMatrix(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_CANVASTOCLIPMATRIX_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_softRanges()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_SOFTRANGES_OFFSET))(this);
		}

		::System::Void set_softRanges(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_SOFTRANGES_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_fillParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_FILLPARAMS_OFFSET))(this);
		}

		::System::Void set_fillParams(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_FILLPARAMS_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_fillParams2()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_FILLPARAMS2_OFFSET))(this);
		}

		::System::Void set_fillParams2(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_FILLPARAMS2_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_texSlice0()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXSLICE0_OFFSET))(this);
		}

		::System::Void set_texSlice0(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXSLICE0_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_texSlice1()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXSLICE1_OFFSET))(this);
		}

		::System::Void set_texSlice1(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXSLICE1_OFFSET))(this, value);
		}

		::System::Boolean get_enabelTexSliced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_ENABELTEXSLICED_OFFSET))(this);
		}

		::System::Void set_enabelTexSliced(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_ENABELTEXSLICED_OFFSET))(this, value);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_ASPECT_OFFSET))(this);
		}

		::System::Void set_aspect(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_ASPECT_OFFSET))(this, value);
		}

		::System::Void SetDirty(::UnityEngine::UI::SmoothMaskMaterial_Params_DirtyFlagBit dirtyBit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMaskMaterial_Params_DirtyFlagBit))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SETDIRTY_OFFSET))(this, dirtyBit);
		}

		::System::Void ClearDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_CLEARDIRTY_OFFSET))(this);
		}

		::System::Boolean IsDirty(::UnityEngine::UI::SmoothMaskMaterial_Params_DirtyFlagBit dirtyBit)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SmoothMaskMaterial_Params_DirtyFlagBit))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_ISDIRTY_OFFSET))(this, dirtyBit);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GETHASHCODE_OFFSET))(this);
		}
	};
}
