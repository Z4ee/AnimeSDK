#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1D7AC710)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D7AC700)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET UNITYSDK_OFFSET(0x1D7AD280)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x1D7AD200)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC6B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC6C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7ACB10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D7ACA10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1D7AD400)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AC540)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC500)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1D7AD120)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D7AD0E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC4A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1D7AD050)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D7AD020)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AC5B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC550)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1D7AD160)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETPOINTER_OFFSET UNITYSDK_OFFSET(0x1D7AD540)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC5C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D7AD1F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D7AD1C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AC4F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC4B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7AD0A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D7AD060)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1D7AC6F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x1D7AC6A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_GETALLPROPERTYNAMESIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC6D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_REBUILDWITHOUTPROPERTIESIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC6E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_REBUILDWITHOUTPROPETIES_OFFSET UNITYSDK_OFFSET(0x1D7AD530)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC650)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1D7ACDA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AC610)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC600)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1D7ACCF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D7ACCB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC660)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x1D7ACDF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC670)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x1D7ACE00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x1D7ACEA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x1D7ACEE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1D7AC720)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC5D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1D7ACC00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D7ACBC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET UNITYSDK_OFFSET(0x1D7ACC40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET UNITYSDK_OFFSET(0x1D7ACC10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC690)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x1D7AD000)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1D7AC900)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AC630)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC620)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1D7ACD60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1D7ACD10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC640)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D7ACDE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D7ACDB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC680)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1D7ACF00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x1D7ACFA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x1D7ACFE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1D7AC810)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AC5F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1D7AC5E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7ACC90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D7ACC50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AC9F0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlock_TypeDefinitionIndex = 5197;

	class MaterialPropertyBlock : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK__CTOR_OFFSET))(this);
		}

		::System::Single GetFloatImpl(::System::Int32 name)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Vector4 GetVectorImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColorImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Matrix4x4 GetMatrixImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Texture* GetTextureImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET))(this, name);
		}

		::System::Void SetFloatImpl(::System::Int32 name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetVectorImpl(::System::Int32 name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetColorImpl(::System::Int32 name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetMatrixImpl(::System::Int32 name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetTextureImpl(::System::Int32 name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetConstantBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET))(this, name, value, offset, size);
		}

		::System::Void SetFloatArrayImpl(::System::Int32 name, ::Il2CppArray<::System::Single>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET))(this, name, values, count);
		}

		::System::Void SetVectorArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET))(this, name, values, count);
		}

		::System::Void SetMatrixArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET))(this, name, values, count);
		}

		static ::System::Void Internal_CopySHCoefficientArraysFrom(::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(properties, lightProbes, sourceStart, destStart, count);
		}

		static ::System::IntPtr CreateImpl()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET))();
		}

		static ::System::Void DestroyImpl(::System::IntPtr mpb)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET))(mpb);
		}

		::System::Boolean Internal_GetAllPropertyNamesImpl(::Il2CppArray<::System::Int32>* typeNameStarts, ::Il2CppArray<::System::Int32>* typeNameArrays)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_GETALLPROPERTYNAMESIMPL_OFFSET))(this, typeNameStarts, typeNameArrays);
		}

		::System::Void RebuildWithoutPropertiesImpl(::Il2CppArray<::System::Int32>* names)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_REBUILDWITHOUTPROPERTIESIMPL_OFFSET))(this, names);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean keepMemory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET))(this, keepMemory);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET))(this);
		}

		::System::Void SetFloatArray(::System::Int32 name, ::Il2CppArray<::System::Single>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET))(this, name, values, count);
		}

		::System::Void SetVectorArray(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(this, name, values, count);
		}

		::System::Void SetMatrixArray(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET))(this, name, values, count);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Void SetFloat_1(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET))(this, name, value);
		}

		::System::Void SetInt_1(::System::Int32 nameID, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetVector(::System::String* name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET))(this, name, value);
		}

		::System::Void SetVector_1(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET))(this, name, value);
		}

		::System::Void SetColor_1(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetMatrix(::System::String* name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET))(this, name, value);
		}

		::System::Void SetMatrix_1(::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetBuffer(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET))(this, nameID, value);
		}

		::System::Void SetTexture(::System::String* name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(this, name, value);
		}

		::System::Void SetTexture_1(::System::Int32 nameID, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetConstantBuffer(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET))(this, nameID, value, offset, size);
		}

		::System::Void SetFloatArray_1(::System::Int32 nameID, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET))(this, nameID, values);
		}

		::System::Void SetFloatArray_2(::System::String* name, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET))(this, name, values);
		}

		::System::Void SetFloatArray_3(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET))(this, nameID, values);
		}

		::System::Void SetVectorArray_1(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET))(this, nameID, values);
		}

		::System::Void SetVectorArray_2(::System::String* name, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET))(this, name, values);
		}

		::System::Void SetVectorArray_3(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET))(this, nameID, values);
		}

		::System::Void SetMatrixArray_1(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET))(this, nameID, values);
		}

		::System::Single GetFloat(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET))(this, name);
		}

		::System::Single GetFloat_1(::System::Int32 nameID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Vector4 GetVector(::System::String* name)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET))(this, name);
		}

		::UnityEngine::Vector4 GetVector_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Color GetColor(::System::String* name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColor_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Matrix4x4 GetMatrix(::System::Int32 nameID)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET))(this, nameID);
		}

		::UnityEngine::Texture* GetTexture(::System::String* name)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET))(this, name);
		}

		::UnityEngine::Texture* GetTexture_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET))(this, nameID);
		}

		::System::Void CopySHCoefficientArraysFrom(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(this, lightProbes);
		}

		::System::Void CopySHCoefficientArraysFrom_1(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET))(this, lightProbes, sourceStart, destStart, count);
		}

		::System::Void GetAllPropertyNames(::Il2CppArray<::System::Int32>* typeNameStarts, ::Il2CppArray<::System::Int32>* typeNameArrays)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET))(this, typeNameStarts, typeNameArrays);
		}

		::System::Void RebuildWithoutPropeties(::Il2CppArray<::System::Int32>* names)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_REBUILDWITHOUTPROPETIES_OFFSET))(this, names);
		}

		::System::IntPtr GetPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETPOINTER_OFFSET))(this);
		}

		::System::Void GetVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET))(this, name, ret);
		}

		::System::Void GetColorImpl_Injected(::System::Int32 name, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET))(this, name, ret);
		}

		::System::Void GetMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET))(this, name, ret);
		}

		::System::Void SetVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET))(this, name, value);
		}

		::System::Void SetColorImpl_Injected(::System::Int32 name, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET))(this, name, value);
		}

		::System::Void SetMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET))(this, name, value);
		}
	};
}
