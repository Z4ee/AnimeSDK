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

#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x1A433770)
#define UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0x1A4336B0)
#define UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1A433430)
#define UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET UNITYSDK_OFFSET(0x1A433310)
#define UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1A433420)
#define UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET UNITYSDK_OFFSET(0x1A433320)
#define UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECT_OFFSET UNITYSDK_OFFSET(0x1A433440)
#define UNITYENGINE_COMPUTESHADER_LOADBUILTBYTES_OFFSET UNITYSDK_OFFSET(0x1A433450)
#define UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET UNITYSDK_OFFSET(0x1A433540)
#define UNITYENGINE_COMPUTESHADER_SETBUFFERBYID_OFFSET UNITYSDK_OFFSET(0x1A433410)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1A433670)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1A433400)
#define UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1A433390)
#define UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x1A433520)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1A433470)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1A433330)
#define UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET UNITYSDK_OFFSET(0x1A4333A0)
#define UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET UNITYSDK_OFFSET(0x1A433530)
#define UNITYENGINE_COMPUTESHADER_SETINT_1_OFFSET UNITYSDK_OFFSET(0x1A4334B0)
#define UNITYENGINE_COMPUTESHADER_SETINT_OFFSET UNITYSDK_OFFSET(0x1A433340)
#define UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1A4333C0)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A433380)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1A433370)
#define UNITYENGINE_COMPUTESHADER_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4333E0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_1_OFFSET UNITYSDK_OFFSET(0x1A433620)
#define UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET UNITYSDK_OFFSET(0x1A4333F0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A433570)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1A433590)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1A4335D0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_4_OFFSET UNITYSDK_OFFSET(0x1A433610)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4333D0)
#define UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1A4333B0)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4334E0)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A433360)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1A433350)
#define UNITYENGINE_COMPUTESHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A433460)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShader_TypeDefinitionIndex = 4187;

	class ComputeShader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER__CTOR_OFFSET))(this);
		}

		::System::Int32 FindKernel(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET))(this, name);
		}

		::System::Boolean HasKernel(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET))(this, name);
		}

		::System::Void SetFloat(::System::Int32 nameID, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET))(this, nameID, val);
		}

		::System::Void SetInt(::System::Int32 nameID, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_OFFSET))(this, nameID, val);
		}

		::System::Void SetVector(::System::Int32 nameID, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET))(this, nameID, val);
		}

		::System::Void SetMatrix(::System::Int32 nameID, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET))(this, nameID, val);
		}

		::System::Void SetFloatArray(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetIntArray(::System::Int32 nameID, ::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetVectorArray(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTORARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetMatrixArray(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIXARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetTexture(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Texture* texture, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(this, kernelIndex, nameID, texture, mipLevel);
		}

		::System::Void SetRenderTexture(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::RenderTexture* texture, ::System::Int32 mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETRENDERTEXTURE_OFFSET))(this, kernelIndex, nameID, texture, mipLevel, element);
		}

		::System::Void SetTextureFromGlobal(::System::Int32 kernelIndex, ::System::Int32 nameID, ::System::Int32 globalTextureNameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_OFFSET))(this, kernelIndex, nameID, globalTextureNameID);
		}

		::System::Void SetBuffer(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(this, kernelIndex, nameID, buffer);
		}

		::System::Void SetBufferByID(::System::Int32 kernelIndex, ::System::Int32 nameID, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFERBYID_OFFSET))(this, kernelIndex, nameID, value);
		}

		::System::Void GetKernelThreadGroupSizes(::System::Int32 kernelIndex, ::System::UInt32& x, ::System::UInt32& y, ::System::UInt32& z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET))(this, kernelIndex, x, y, z);
		}

		::System::Void Dispatch(::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET))(this, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void Internal_DispatchIndirect(::System::Int32 kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, ::System::UInt32 argsOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_INTERNAL_DISPATCHINDIRECT_OFFSET))(this, kernelIndex, argsBuffer, argsOffset);
		}

		::System::Void LoadBuiltBytes(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_LOADBUILTBYTES_OFFSET))(this, bytes);
		}

		::System::Void SetFloat_1(::System::String* name, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_1_OFFSET))(this, name, val);
		}

		::System::Void SetInt_1(::System::String* name, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_1_OFFSET))(this, name, val);
		}

		::System::Void SetVector_1(::System::String* name, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_1_OFFSET))(this, name, val);
		}

		::System::Void SetFloats(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET))(this, nameID, values);
		}

		::System::Void SetInts(::System::Int32 nameID, ::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET))(this, nameID, values);
		}

		::System::Void SetBool(::System::Int32 nameID, ::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBOOL_OFFSET))(this, nameID, val);
		}

		::System::Void SetTexture_1(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_1_OFFSET))(this, kernelIndex, nameID, texture);
		}

		::System::Void SetTexture_2(::System::Int32 kernelIndex, ::System::String* name, ::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_2_OFFSET))(this, kernelIndex, name, texture);
		}

		::System::Void SetTexture_3(::System::Int32 kernelIndex, ::System::String* name, ::UnityEngine::Texture* texture, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_3_OFFSET))(this, kernelIndex, name, texture, mipLevel);
		}

		::System::Void SetTexture_4(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::RenderTexture* texture, ::System::Int32 mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_4_OFFSET))(this, kernelIndex, nameID, texture, mipLevel, element);
		}

		::System::Void SetTextureFromGlobal_1(::System::Int32 kernelIndex, ::System::String* name, ::System::String* globalTextureName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTUREFROMGLOBAL_1_OFFSET))(this, kernelIndex, name, globalTextureName);
		}

		::System::Void SetBuffer_1(::System::Int32 kernelIndex, ::System::String* name, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_1_OFFSET))(this, kernelIndex, name, buffer);
		}

		::System::Void DispatchIndirect(::System::Int32 kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer, ::System::UInt32 argsOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_OFFSET))(this, kernelIndex, argsBuffer, argsOffset);
		}

		::System::Void DispatchIndirect_1(::System::Int32 kernelIndex, ::UnityEngine::ComputeBuffer* argsBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCHINDIRECT_1_OFFSET))(this, kernelIndex, argsBuffer);
		}

		::System::Void SetVector_Injected(::System::Int32 nameID, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET))(this, nameID, val);
		}

		::System::Void SetMatrix_Injected(::System::Int32 nameID, ::UnityEngine::Matrix4x4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET))(this, nameID, val);
		}
	};
}
