#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1B285410)
#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0x1B285350)
#define UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1B2850D0)
#define UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET UNITYSDK_OFFSET(0x1B284FB0)
#define UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1B2850C0)
#define UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET UNITYSDK_OFFSET(0x1B284FC0)
#define UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0x1B2850E0)
#define UNITYENGINE_COMPUTESHADER_LOADBUILTBYTES_OFFSET UNITYSDK_OFFSET(0x1B2850F0)
#define UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET UNITYSDK_OFFSET(0x1B2851E0)
#define UNITYENGINE_COMPUTESHADER_SETBUFFERBYID_OFFSET UNITYSDK_OFFSET(0x1B2850B0)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B285310)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2850A0)
#define UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1B285030)
#define UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x1B2851C0)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1B285110)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B284FD0)
#define UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET UNITYSDK_OFFSET(0x1B285040)
#define UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET UNITYSDK_OFFSET(0x1B2851D0)
#define UNITYENGINE_COMPUTESHADER_SETINT_1_OFFSET UNITYSDK_OFFSET(0x1B285150)
#define UNITYENGINE_COMPUTESHADER_SETINT_OFFSET UNITYSDK_OFFSET(0x1B284FE0)
#define UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1B285060)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B285020)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1B285010)
#define UNITYENGINE_COMPUTESHADER_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B285080)
#define UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_1_OFFSET UNITYSDK_OFFSET(0x1B2852C0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET UNITYSDK_OFFSET(0x1B285090)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1B285210)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1B285230)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1B285270)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x1B2852B0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B285070)
#define UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1B285050)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1B285180)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B285000)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1B284FF0)
#define UNITYENGINE_COMPUTESHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B285100)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShader_TypeDefinitionIndex = 4361;

	class ComputeShader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER__CTOR_OFFSET))(this);
		}

		::System::Int32 FindKernel(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET))(this, a1);
		}

		::System::Boolean HasKernel(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET))(this, a1);
		}

		::System::Void SetFloat(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetIntArray(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetRenderTexture(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTexture* a3, ::System::Int32 a4, ::UnityEngine::Rendering::RenderTextureSubElement a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETRENDERTEXTURE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetTextureFromGlobal(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBuffer(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBufferByID(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFERBYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetKernelThreadGroupSizes(::System::Int32 a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispatch(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_DispatchIndirect(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadBuiltBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_LOADBUILTBYTES_OFFSET))(this, a1);
		}

		::System::Void SetFloat_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_1(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloats(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET))(this, a1, a2);
		}

		::System::Void SetInts(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET))(this, a1, a2);
		}

		::System::Void SetBool(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTexture_2(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTexture_3(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTexture_4(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTexture* a3, ::System::Int32 a4, ::UnityEngine::Rendering::RenderTextureSubElement a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetTextureFromGlobal_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBuffer_1(::System::Int32 a1, ::System::String* a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DispatchIndirect(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DispatchIndirect_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
