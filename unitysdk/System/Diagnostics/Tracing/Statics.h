#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x186B8B80)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x186BFC20)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_OFFSET UNITYSDK_OFFSET(0x186BFC10)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x186C0160)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x186BFC90)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ENCODETAGS_OFFSET UNITYSDK_OFFSET(0x186B8F40)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FINDENUMERABLEELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x186BFEA0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT16_OFFSET UNITYSDK_OFFSET(0x1869CEE0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT32_OFFSET UNITYSDK_OFFSET(0x186B9890)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT64_OFFSET UNITYSDK_OFFSET(0x1869E560)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT8_OFFSET UNITYSDK_OFFSET(0x1869BFD0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMATPTR_OFFSET UNITYSDK_OFFSET(0x186BA150)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETDECLAREDSTATICMETHOD_OFFSET UNITYSDK_OFFSET(0x186BFD80)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x186BFE70)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x186BFD50)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x186BFD20)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETTYPEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x186C0180)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_HASCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x186BFE30)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISENUM_OFFSET UNITYSDK_OFFSET(0x186BFCF0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISGENERICMATCH_OFFSET UNITYSDK_OFFSET(0x186C00E0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x186BFCC0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_MAKEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1869C8B0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_METADATAFORSTRING_OFFSET UNITYSDK_OFFSET(0x186A7610)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_SHOULDOVERRIDEFIELDNAME_OFFSET UNITYSDK_OFFSET(0x186BFC30)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x186C05A0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int Statics_TypeDefinitionIndex = 1648;

	class Statics : public ::System::Object
	{
	public:
		static ::System::Diagnostics::Tracing::TraceLoggingDataType* StaticGet_HexIntPtrType()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingDataType*)Il2CppClass::FromTypeDefinitionIndex(Statics_TypeDefinitionIndex)->GetStaticField(0x2F50);
		}
		static ::System::Diagnostics::Tracing::TraceLoggingDataType* StaticGet_UIntPtrType()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingDataType*)Il2CppClass::FromTypeDefinitionIndex(Statics_TypeDefinitionIndex)->GetStaticField(0x2F54);
		}
		static ::System::Diagnostics::Tracing::TraceLoggingDataType* StaticGet_IntPtrType()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingDataType*)Il2CppClass::FromTypeDefinitionIndex(Statics_TypeDefinitionIndex)->GetStaticField(0x2F58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* MetadataForString(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_METADATAFORSTRING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EncodeTags(::System::Int32 a1, ::System::Int32& a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ENCODETAGS_OFFSET))(a1, a2, a3);
		}

		static ::System::Byte Combine(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::System::Byte(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Combine_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_1_OFFSET))(a1, a2);
		}

		static ::System::Void CheckName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_CHECKNAME_OFFSET))(a1);
		}

		static ::System::Boolean ShouldOverrideFieldName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_SHOULDOVERRIDEFIELDNAME_OFFSET))(a1);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType MakeDataType(::System::Diagnostics::Tracing::TraceLoggingDataType a1, ::System::Diagnostics::Tracing::EventFieldFormat a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_MAKEDATATYPE_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format8(::System::Diagnostics::Tracing::EventFieldFormat a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT8_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format16(::System::Diagnostics::Tracing::EventFieldFormat a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT16_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format32(::System::Diagnostics::Tracing::EventFieldFormat a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT32_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format64(::System::Diagnostics::Tracing::EventFieldFormat a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT64_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType FormatPtr(::System::Diagnostics::Tracing::EventFieldFormat a1, ::System::Diagnostics::Tracing::TraceLoggingDataType a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMATPTR_OFFSET))(a1, a2);
		}

		static ::System::Object* CreateInstance(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsValueType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISVALUETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsEnum(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISENUM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETPROPERTIES_OFFSET))(a1);
		}

		static ::System::Reflection::MethodInfo* GetGetMethod(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGETMETHOD_OFFSET))(a1);
		}

		static ::System::Reflection::MethodInfo* GetDeclaredStaticMethod(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETDECLAREDSTATICMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasCustomAttribute(::System::Reflection::PropertyInfo* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_HASCUSTOMATTRIBUTE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Type*>* GetGenericArguments(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGENERICARGUMENTS_OFFSET))(a1);
		}

		static ::System::Type* FindEnumerableElementType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FINDENUMERABLEELEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericMatch(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISGENERICMATCH_OFFSET))(a1, a2);
		}

		static ::System::Delegate* CreateDelegate(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEDELEGATE_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo* GetTypeInfoInstance(::System::Type* a1, ::System::Collections::Generic::List_1<::System::Type*>* a2)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingTypeInfo*(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETTYPEINFOINSTANCE_OFFSET))(a1, a2);
		}
	};
}
