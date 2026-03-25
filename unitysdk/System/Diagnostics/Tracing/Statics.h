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

#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x162D58E0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x162DC880)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_OFFSET UNITYSDK_OFFSET(0x162DC870)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x162DCDE0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x162DC8F0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ENCODETAGS_OFFSET UNITYSDK_OFFSET(0x162D5CF0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FINDENUMERABLEELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x162DCB00)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT16_OFFSET UNITYSDK_OFFSET(0x162B8160)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT32_OFFSET UNITYSDK_OFFSET(0x162D6650)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT64_OFFSET UNITYSDK_OFFSET(0x162B9890)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT8_OFFSET UNITYSDK_OFFSET(0x162B7350)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMATPTR_OFFSET UNITYSDK_OFFSET(0x162D6F10)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETDECLAREDSTATICMETHOD_OFFSET UNITYSDK_OFFSET(0x162DC9E0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x162DCAD0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x162DC9B0)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x162DC980)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETTYPEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x162DCE00)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_HASCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x162DCA90)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISENUM_OFFSET UNITYSDK_OFFSET(0x162DC950)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISGENERICMATCH_OFFSET UNITYSDK_OFFSET(0x162DCD60)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x162DC920)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_MAKEDATATYPE_OFFSET UNITYSDK_OFFSET(0x162B7B70)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_METADATAFORSTRING_OFFSET UNITYSDK_OFFSET(0x162C2110)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS_SHOULDOVERRIDEFIELDNAME_OFFSET UNITYSDK_OFFSET(0x162DC890)
#define SYSTEM_DIAGNOSTICS_TRACING_STATICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x162DD260)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int Statics_TypeDefinitionIndex = 1649;

	class Statics : public ::System::Object
	{
	public:
		static ::System::Diagnostics::Tracing::TraceLoggingDataType* StaticGet_HexIntPtrType()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingDataType*)Il2CppClass::FromTypeDefinitionIndex(Statics_TypeDefinitionIndex)->GetStaticField(0x2940);
		}
		static ::System::Diagnostics::Tracing::TraceLoggingDataType* StaticGet_UIntPtrType()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingDataType*)Il2CppClass::FromTypeDefinitionIndex(Statics_TypeDefinitionIndex)->GetStaticField(0x2944);
		}
		static ::System::Diagnostics::Tracing::TraceLoggingDataType* StaticGet_IntPtrType()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingDataType*)Il2CppClass::FromTypeDefinitionIndex(Statics_TypeDefinitionIndex)->GetStaticField(0x2948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* MetadataForString(::System::String* name, ::System::Int32 prefixSize, ::System::Int32 suffixSize, ::System::Int32 additionalSize)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_METADATAFORSTRING_OFFSET))(name, prefixSize, suffixSize, additionalSize);
		}

		static ::System::Void EncodeTags(::System::Int32 tags, ::System::Int32& pos, ::Il2CppArray<::System::Byte>* metadata)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ENCODETAGS_OFFSET))(tags, pos, metadata);
		}

		static ::System::Byte Combine(::System::Int32 settingValue, ::System::Byte defaultValue)
		{
			return ((::System::Byte(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_OFFSET))(settingValue, defaultValue);
		}

		static ::System::Int32 Combine_1(::System::Int32 settingValue1, ::System::Int32 settingValue2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_COMBINE_1_OFFSET))(settingValue1, settingValue2);
		}

		static ::System::Void CheckName(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_CHECKNAME_OFFSET))(name);
		}

		static ::System::Boolean ShouldOverrideFieldName(::System::String* fieldName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_SHOULDOVERRIDEFIELDNAME_OFFSET))(fieldName);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType MakeDataType(::System::Diagnostics::Tracing::TraceLoggingDataType baseType, ::System::Diagnostics::Tracing::EventFieldFormat format)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::TraceLoggingDataType, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_MAKEDATATYPE_OFFSET))(baseType, format);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format8(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT8_OFFSET))(format, native);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format16(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT16_OFFSET))(format, native);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format32(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT32_OFFSET))(format, native);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType Format64(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMAT64_OFFSET))(format, native);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingDataType FormatPtr(::System::Diagnostics::Tracing::EventFieldFormat format, ::System::Diagnostics::Tracing::TraceLoggingDataType native)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingDataType(*)(::System::Diagnostics::Tracing::EventFieldFormat, ::System::Diagnostics::Tracing::TraceLoggingDataType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FORMATPTR_OFFSET))(format, native);
		}

		static ::System::Object* CreateInstance(::System::Type* type, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEINSTANCE_OFFSET))(type, parameters);
		}

		static ::System::Boolean IsValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISVALUETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsEnum(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISENUM_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETPROPERTIES_OFFSET))(type);
		}

		static ::System::Reflection::MethodInfo* GetGetMethod(::System::Reflection::PropertyInfo* propInfo)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGETMETHOD_OFFSET))(propInfo);
		}

		static ::System::Reflection::MethodInfo* GetDeclaredStaticMethod(::System::Type* declaringType, ::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETDECLAREDSTATICMETHOD_OFFSET))(declaringType, name);
		}

		static ::System::Boolean HasCustomAttribute(::System::Reflection::PropertyInfo* propInfo, ::System::Type* attributeType)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_HASCUSTOMATTRIBUTE_OFFSET))(propInfo, attributeType);
		}

		static ::Il2CppArray<::System::Type*>* GetGenericArguments(::System::Type* type)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETGENERICARGUMENTS_OFFSET))(type);
		}

		static ::System::Type* FindEnumerableElementType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_FINDENUMERABLEELEMENTTYPE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericMatch(::System::Type* type, ::System::Object* openType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_ISGENERICMATCH_OFFSET))(type, openType);
		}

		static ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Reflection::MethodInfo* methodInfo)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_CREATEDELEGATE_OFFSET))(delegateType, methodInfo);
		}

		static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo* GetTypeInfoInstance(::System::Type* dataType, ::System::Collections::Generic::List_1<::System::Type*>* recursionCheck)
		{
			return ((::System::Diagnostics::Tracing::TraceLoggingTypeInfo*(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_STATICS_GETTYPEINFOINSTANCE_OFFSET))(dataType, recursionCheck);
		}
	};
}
