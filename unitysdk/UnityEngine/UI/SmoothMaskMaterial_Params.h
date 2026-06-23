#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params_DirtyFlagBit.h"
#include "unitysdk/UnityEngine/UI/SmoothMask_Type.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_CLEARDIRTY_OFFSET UNITYSDK_OFFSET(0xA710F0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA711A0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA711B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_CANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x3E90B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_FILLPARAMS_OFFSET UNITYSDK_OFFSET(0x4B6100)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_INVERT_OFFSET UNITYSDK_OFFSET(0xA40480)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_SOFTRANGES_OFFSET UNITYSDK_OFFSET(0x45A490)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA71140)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SETDIRTY_OFFSET UNITYSDK_OFFSET(0xA710A0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_CANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0xA71010)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_FILLPARAMS_OFFSET UNITYSDK_OFFSET(0xA71070)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_INVERT_OFFSET UNITYSDK_OFFSET(0xA71090)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_SOFTRANGES_OFFSET UNITYSDK_OFFSET(0xA71050)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA71000)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA70FF0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA711C0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA71280)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_Params_TypeDefinitionIndex = 18966;

	struct alignas(8) SmoothMaskMaterial_Params
	{
		::UnityEngine::UI::SmoothMask_Type _type; // 0x10
		::UnityEngine::Texture* _texture; // 0x18
		::UnityEngine::Matrix4x4 _canvasToClipMatrix; // 0x20
		::UnityEngine::Vector4 _softRanges; // 0x60
		::UnityEngine::Vector4 _fillParams; // 0x70
		::System::Boolean _invert; // 0x80
		::System::Int32 dirtyFlag; // 0x84

		::UnityEngine::UI::SmoothMask_Type get_type()
		{
			return ((::UnityEngine::UI::SmoothMask_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::UI::SmoothMask_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SmoothMask_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TYPE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_TEXTURE_OFFSET))(this, value);
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

		::System::Boolean get_invert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_GET_INVERT_OFFSET))(this);
		}

		::System::Void set_invert(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS_SET_INVERT_OFFSET))(this, value);
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

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_PARAMS___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
