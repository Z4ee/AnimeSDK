#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_MATRIX4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3ACB260)
#define UNITYENGINE_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ACB200)
#define UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x3ACB2A0)
#define UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3ACB1F0)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CCCFED0)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x3ACAF70)
#define UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CCCFE70)
#define UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET UNITYSDK_OFFSET(0x3ACAF40)
#define UNITYENGINE_MATRIX4X4_GETROW_OFFSET UNITYSDK_OFFSET(0x3ACB2C0)
#define UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1CCD1500)
#define UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x3ACB090)
#define UNITYENGINE_MATRIX4X4_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x3ACAFB0)
#define UNITYENGINE_MATRIX4X4_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x3ACB1D0)
#define UNITYENGINE_MATRIX4X4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3ACB1B0)
#define UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x3ACAF70)
#define UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3ACAF40)
#define UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x3ACB120)
#define UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1CCD14D0)
#define UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112960)
#define UNITYENGINE_MATRIX4X4_INVERSE_OFFSET UNITYSDK_OFFSET(0x1CCD00F0)
#define UNITYENGINE_MATRIX4X4_ISIDENTITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CCCFEF0)
#define UNITYENGINE_MATRIX4X4_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x3ACAFB0)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET UNITYSDK_OFFSET(0x38ECA40)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0x38EC960)
#define UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0x38ECAD0)
#define UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CCD0D70)
#define UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CCD0EA0)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1CCD0D00)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CCD0B30)
#define UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112980)
#define UNITYENGINE_MATRIX4X4_ORTHO_OFFSET UNITYSDK_OFFSET(0x1CCD02D0)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112990)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET UNITYSDK_OFFSET(0x1CCD0380)
#define UNITYENGINE_MATRIX4X4_ROTATE_OFFSET UNITYSDK_OFFSET(0x1CCD1370)
#define UNITYENGINE_MATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x1CCD12E0)
#define UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0x3ACB2E0)
#define UNITYENGINE_MATRIX4X4_SETROW_OFFSET UNITYSDK_OFFSET(0x3ACB380)
#define UNITYENGINE_MATRIX4X4_SETTRS_OFFSET UNITYSDK_OFFSET(0x3ACAFD0)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x3ACB1E0)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3ACB1C0)
#define UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3ACB410)
#define UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1CCD1320)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112970)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1CCD01E0)
#define UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112950)
#define UNITYENGINE_MATRIX4X4_TRS_OFFSET UNITYSDK_OFFSET(0x1CCCFFC0)
#define UNITYENGINE_MATRIX4X4_VALIDTRS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CCCFFB0)
#define UNITYENGINE_MATRIX4X4_VALIDTRS_OFFSET UNITYSDK_OFFSET(0x3ACAFC0)
#define UNITYENGINE_MATRIX4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD1C60)
#define UNITYENGINE_MATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x38EC570)

namespace UnityEngine
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 4213;

	struct alignas(4) Matrix4x4
	{
		static ::UnityEngine::Matrix4x4* StaticGet_identityMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x97D0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_zeroMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x9810);
		}
		::System::Single m00; // 0x10
		::System::Single m10; // 0x14
		::System::Single m20; // 0x18
		::System::Single m30; // 0x1C
		::System::Single m01; // 0x20
		::System::Single m11; // 0x24
		::System::Single m21; // 0x28
		::System::Single m31; // 0x2C
		::System::Single m02; // 0x30
		::System::Single m12; // 0x34
		::System::Single m22; // 0x38
		::System::Single m32; // 0x3C
		::System::Single m03; // 0x40
		::System::Single m13; // 0x44
		::System::Single m23; // 0x48
		::System::Single m33; // 0x4C

		/*
		::System::Void _ctor(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4__CCTOR_OFFSET))();
		}

		/*
		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET))(this);
		}
		*/

		::System::Boolean IsIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ISIDENTITY_OFFSET))(this);
		}

		/*
		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_lossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET))(this);
		}
		*/

		::System::Boolean get_isIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ISIDENTITY_OFFSET))(this);
		}

		::System::Boolean ValidTRS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_VALIDTRS_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRS_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		::System::Void SetTRS(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETTRS_OFFSET))(this, a1, a2, a3);
		}
		*/

		static ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE_OFFSET))(a1);
		}

		::UnityEngine::Matrix4x4 get_inverse()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 Transpose(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET))(a1);
		}

		::UnityEngine::Matrix4x4 get_transpose()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 Ortho(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ORTHO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Matrix4x4 Perspective(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Single get_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_Item_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_EQUALS_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Matrix4x4 op_Multiply(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		/*
		static ::UnityEngine::Vector4 op_Multiply_1(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean op_Equality(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		/*
		::UnityEngine::Vector4 GetColumn(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector4 GetRow(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROW_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void SetColumn(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void SetRow(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETROW_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET))(this, a1);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 Scale(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SCALE_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 Translate(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ROTATE_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::Matrix4x4 get_zero()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 get_identity()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Void GetRotation_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void GetLossyScale_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean IsIdentity_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ISIDENTITY_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean ValidTRS_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_VALIDTRS_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void TRS_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Matrix4x4& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Void Inverse_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void Transpose_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void Ortho_Injected(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Matrix4x4& a7)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Perspective_Injected(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Matrix4x4& a5)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
