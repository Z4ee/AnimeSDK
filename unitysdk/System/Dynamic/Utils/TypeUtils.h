#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x19EBF7E0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x19EBCC00)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_CANCACHE_OFFSET UNITYSDK_OFFSET(0x19EBE5F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x19EC08E0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x19EC0AE0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET UNITYSDK_OFFSET(0x19EC0FB0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x19EC17B0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x19EBE890)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET UNITYSDK_OFFSET(0x19EC1190)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x19EBE9A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET UNITYSDK_OFFSET(0x19EC0790)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GET_MSCORLIB_OFFSET UNITYSDK_OFFSET(0x19EC1710)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET UNITYSDK_OFFSET(0x19EC0060)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x19EBF4F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x19EBF890)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET UNITYSDK_OFFSET(0x19EBFE80)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET UNITYSDK_OFFSET(0x19EBECF0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET UNITYSDK_OFFSET(0x19EBEB90)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET UNITYSDK_OFFSET(0x19EBFDC0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x19EBF800)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET UNITYSDK_OFFSET(0x19EBFD90)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x19EBFE20)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET UNITYSDK_OFFSET(0x19EC0620)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET UNITYSDK_OFFSET(0x19EC0370)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET UNITYSDK_OFFSET(0x19EC06F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET UNITYSDK_OFFSET(0x19EC0490)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x19EC05F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET UNITYSDK_OFFSET(0x19EBEE20)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x19EBEC60)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET UNITYSDK_OFFSET(0x19EBFDF0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET UNITYSDK_OFFSET(0x19EBFAA0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x19EBEB00)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x19EBE930)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET UNITYSDK_OFFSET(0x19EBEEC0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x19EBEBD0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET UNITYSDK_OFFSET(0x19EBD350)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET UNITYSDK_OFFSET(0x19EBED80)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x19EBEFA0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_1_OFFSET UNITYSDK_OFFSET(0x19EBCB40)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_2_OFFSET UNITYSDK_OFFSET(0x19EC11F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET UNITYSDK_OFFSET(0x19EC11E0)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeUtils_TypeDefinitionIndex = 3677;

	class TypeUtils : public ::System::Object
	{
	public:
		static ::System::Reflection::Assembly** StaticGet_s_mscorlib()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(TypeUtils_TypeDefinitionIndex)->GetStaticField(0x118D0);
		}

		static ::System::Type* GetNonNullableType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET))(type);
		}

		static ::System::Type* GetNullableType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsNullableType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsNullableOrReferenceType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsBool(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET))(type);
		}

		static ::System::Boolean IsNumeric(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET))(type);
		}

		static ::System::Boolean IsInteger(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET))(type);
		}

		static ::System::Boolean IsArithmetic(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET))(type);
		}

		static ::System::Boolean IsUnsignedInt(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET))(type);
		}

		static ::System::Boolean IsIntegerOrBool(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET))(type);
		}

		static ::System::Boolean IsNumericOrBool(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET))(type);
		}

		static ::System::Boolean IsValidInstanceType(::System::Reflection::MemberInfo* member, ::System::Type* instanceType)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET))(member, instanceType);
		}

		static ::System::Boolean HasIdentityPrimitiveOrNullableConversionTo(::System::Type* source, ::System::Type* dest)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET))(source, dest);
		}

		static ::System::Boolean HasReferenceConversionTo(::System::Type* source, ::System::Type* dest)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET))(source, dest);
		}

		static ::System::Boolean IsCovariant(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET))(t);
		}

		static ::System::Boolean IsContravariant(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET))(t);
		}

		static ::System::Boolean IsInvariant(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET))(t);
		}

		static ::System::Boolean IsDelegate(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET))(t);
		}

		static ::System::Boolean IsLegalExplicitVariantDelegateConversion(::System::Type* source, ::System::Type* dest)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET))(source, dest);
		}

		static ::System::Boolean IsConvertible(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET))(type);
		}

		static ::System::Boolean HasReferenceEquality(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean HasBuiltInEqualityOperator(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET))(left, right);
		}

		static ::System::Boolean IsImplicitlyConvertibleTo(::System::Type* source, ::System::Type* destination)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET))(source, destination);
		}

		static ::System::Reflection::MethodInfo* GetUserDefinedCoercionMethod(::System::Type* convertFrom, ::System::Type* convertToType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET))(convertFrom, convertToType);
		}

		static ::System::Reflection::MethodInfo* FindConversionOperator(::Il2CppArray<::System::Reflection::MethodInfo*>* methods, ::System::Type* typeFrom, ::System::Type* typeTo)
		{
			return ((::System::Reflection::MethodInfo*(*)(::Il2CppArray<::System::Reflection::MethodInfo*>*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET))(methods, typeFrom, typeTo);
		}

		static ::System::Boolean IsImplicitNumericConversion(::System::Type* source, ::System::Type* destination)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET))(source, destination);
		}

		static ::System::Boolean IsImplicitReferenceConversion(::System::Type* source, ::System::Type* destination)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET))(source, destination);
		}

		static ::System::Boolean IsImplicitBoxingConversion(::System::Type* source, ::System::Type* destination)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET))(source, destination);
		}

		static ::System::Boolean IsImplicitNullableConversion(::System::Type* source, ::System::Type* destination)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET))(source, destination);
		}

		static ::System::Type* FindGenericType(::System::Type* definition, ::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET))(definition, type);
		}

		static ::System::Reflection::MethodInfo* GetBooleanOperator(::System::Type* type, ::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET))(type, name);
		}

		static ::System::Type* GetNonRefType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET))(type);
		}

		static ::System::Boolean AreEquivalent(::System::Type* t1, ::System::Type* t2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET))(t1, t2);
		}

		static ::System::Boolean AreReferenceAssignable(::System::Type* dest, ::System::Type* src)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET))(dest, src);
		}

		static ::System::Boolean IsSameOrSubclass(::System::Type* type, ::System::Type* subType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET))(type, subType);
		}

		static ::System::Void ValidateType(::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET))(type, paramName);
		}

		static ::System::Void ValidateType_1(::System::Type* type, ::System::String* paramName, ::System::Boolean allowByRef, ::System::Boolean allowPointer)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_1_OFFSET))(type, paramName, allowByRef, allowPointer);
		}

		static ::System::Boolean ValidateType_2(::System::Type* type, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_2_OFFSET))(type, paramName, index);
		}

		static ::System::Reflection::Assembly* get_MsCorLib()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GET_MSCORLIB_OFFSET))();
		}

		static ::System::Boolean CanCache(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_CANCACHE_OFFSET))(t);
		}

		static ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Type* delegateType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET))(delegateType);
		}
	};
}
