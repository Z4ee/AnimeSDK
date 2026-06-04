#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1AD36440)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1AD338D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_CANCACHE_OFFSET UNITYSDK_OFFSET(0x1AD35110)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AD37650)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1AD37840)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AD37D30)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x1AD384F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AD35350)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET UNITYSDK_OFFSET(0x1AD37F00)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AD35450)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1AD37500)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GET_MSCORLIB_OFFSET UNITYSDK_OFFSET(0x1AD38480)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AD36C80)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x1AD35F50)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x1AD364F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AD36A90)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET UNITYSDK_OFFSET(0x1AD35760)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1AD35600)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET UNITYSDK_OFFSET(0x1AD369E0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x1AD36460)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET UNITYSDK_OFFSET(0x1AD369B0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AD36A40)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD37340)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET UNITYSDK_OFFSET(0x1AD37010)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD37400)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD371B0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD37310)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET UNITYSDK_OFFSET(0x1AD35890)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x1AD356D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET UNITYSDK_OFFSET(0x1AD36A10)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AD36700)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1AD35580)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AD353E0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET UNITYSDK_OFFSET(0x1AD35930)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x1AD35640)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET UNITYSDK_OFFSET(0x1AD34020)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET UNITYSDK_OFFSET(0x1AD357F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x1AD35A00)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_1_OFFSET UNITYSDK_OFFSET(0x1AD33810)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_2_OFFSET UNITYSDK_OFFSET(0x1AD37F60)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET UNITYSDK_OFFSET(0x1AD37F50)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeUtils_TypeDefinitionIndex = 3678;

	class TypeUtils : public ::System::Object
	{
	public:
		static ::System::Reflection::Assembly** StaticGet_s_mscorlib()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(TypeUtils_TypeDefinitionIndex)->GetStaticField(0x29120);
		}

		static ::System::Type* GetNonNullableType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Type* GetNullableType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsNullableType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsNullableOrReferenceType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsBool(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET))(a1);
		}

		static ::System::Boolean IsNumeric(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET))(a1);
		}

		static ::System::Boolean IsInteger(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET))(a1);
		}

		static ::System::Boolean IsArithmetic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET))(a1);
		}

		static ::System::Boolean IsUnsignedInt(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET))(a1);
		}

		static ::System::Boolean IsIntegerOrBool(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET))(a1);
		}

		static ::System::Boolean IsNumericOrBool(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET))(a1);
		}

		static ::System::Boolean IsValidInstanceType(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasIdentityPrimitiveOrNullableConversionTo(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasReferenceConversionTo(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCovariant(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsContravariant(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsInvariant(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsDelegate(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET))(a1);
		}

		static ::System::Boolean IsLegalExplicitVariantDelegateConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsConvertible(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET))(a1);
		}

		static ::System::Boolean HasReferenceEquality(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasBuiltInEqualityOperator(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitlyConvertibleTo(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetUserDefinedCoercionMethod(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* FindConversionOperator(::Il2CppArray<::System::Reflection::MethodInfo*>* a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::Il2CppArray<::System::Reflection::MethodInfo*>*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsImplicitNumericConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitReferenceConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitBoxingConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitNullableConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Type* FindGenericType(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetBooleanOperator(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET))(a1, a2);
		}

		static ::System::Type* GetNonRefType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET))(a1);
		}

		static ::System::Boolean AreEquivalent(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET))(a1, a2);
		}

		static ::System::Boolean AreReferenceAssignable(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameOrSubclass(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateType(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateType_1(::System::Type* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ValidateType_2(::System::Type* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::Assembly* get_MsCorLib()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GET_MSCORLIB_OFFSET))();
		}

		static ::System::Boolean CanCache(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_CANCACHE_OFFSET))(a1);
		}

		static ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET))(a1);
		}
	};
}
