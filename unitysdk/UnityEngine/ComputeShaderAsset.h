#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_COMPUTESHADERASSET_GET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x1DECA9D0)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFERBYID_OFFSET UNITYSDK_OFFSET(0x1DECAB50)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1DECAB90)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1DECAB60)
#define UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1DECAA30)
#define UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1DECA9F0)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1DECAAF0)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DECAB00)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1DECAAA0)
#define UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1DECAB40)
#define UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DECAB10)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1DECAA80)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DECAA90)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1DECAA40)
#define UNITYENGINE_COMPUTESHADERASSET_SET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x1DECA9E0)
#define UNITYENGINE_COMPUTESHADERASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECA540)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShaderAsset_TypeDefinitionIndex = 4110;

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

		::System::Void set_computeShader(::UnityEngine::ComputeShader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SET_COMPUTESHADER_OFFSET))(this, a1);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETTEXTURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetBufferByID(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFERBYID_OFFSET))(this, a1, a2);
		}

		::System::Void SetBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void SetBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
