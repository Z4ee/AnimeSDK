#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_COMPUTESHADERASSET_GET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x1A433780)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFERBYID_OFFSET UNITYSDK_OFFSET(0x1A433900)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1A433940)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1A433910)
#define UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1A4337E0)
#define UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A4337A0)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1A4338A0)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4338B0)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1A433850)
#define UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A4338F0)
#define UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4338C0)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1A433830)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A433840)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1A4337F0)
#define UNITYENGINE_COMPUTESHADERASSET_SET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x1A433790)
#define UNITYENGINE_COMPUTESHADERASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4332F0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShaderAsset_TypeDefinitionIndex = 3921;

	class ComputeShaderAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::ComputeShader* get_computeShader()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_GET_COMPUTESHADER_OFFSET))(this);
		}

		::System::Void set_computeShader(::UnityEngine::ComputeShader* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SET_COMPUTESHADER_OFFSET))(this, value);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_OFFSET))(this, name, val);
		}

		::System::Void SetFloat_1(::System::Int32 name, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_1_OFFSET))(this, name, val);
		}

		::System::Void SetVector(::System::String* name, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_OFFSET))(this, name, val);
		}

		::System::Void SetVector_1(::System::Int32 name, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_1_OFFSET))(this, name, val);
		}

		::System::Void SetMatrix(::System::String* name, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_OFFSET))(this, name, val);
		}

		::System::Void SetMatrix_1(::System::Int32 name, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_1_OFFSET))(this, name, val);
		}

		::System::Void SetTexture(::System::String* name, ::UnityEngine::Texture* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_OFFSET))(this, name, val);
		}

		::System::Void SetTexture_1(::System::Int32 name, ::UnityEngine::Texture* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_1_OFFSET))(this, name, val);
		}

		::System::Void SetBufferByID(::System::Int32 name, ::System::UInt64 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFERBYID_OFFSET))(this, name, val);
		}

		::System::Void SetBuffer(::System::String* name, ::UnityEngine::ComputeBuffer* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_OFFSET))(this, name, val);
		}

		::System::Void SetBuffer_1(::System::Int32 name, ::UnityEngine::ComputeBuffer* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_1_OFFSET))(this, name, val);
		}

		::System::Void SetVector_Injected(::System::Int32 name, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_INJECTED_OFFSET))(this, name, val);
		}

		::System::Void SetMatrix_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_INJECTED_OFFSET))(this, name, val);
		}
	};
}
