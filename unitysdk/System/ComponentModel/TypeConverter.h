#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_1_OFFSET UNITYSDK_OFFSET(0x1AF2A670)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1AF362F0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_1_OFFSET UNITYSDK_OFFSET(0x1AF2A740)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1AF36310)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF36550)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_OFFSET UNITYSDK_OFFSET(0x1AF364F0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF365B0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1AF36530)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1AF36580)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_1_OFFSET UNITYSDK_OFFSET(0x1AF2ACE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1AF36330)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF2BD50)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_OFFSET UNITYSDK_OFFSET(0x1AF367E0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF369D0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1AF36870)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF368F0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_1_OFFSET UNITYSDK_OFFSET(0x1AF2BDE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1AF36660)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AF36AE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF36AC0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF363D0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTTOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF36690)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1AF36B10)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AF36AF0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1AF36C70)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AF36C50)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1AF36B30)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_2_OFFSET UNITYSDK_OFFSET(0x1AF36C40)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AF36B20)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_1_OFFSET UNITYSDK_OFFSET(0x1AF36CD0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1AF36CB0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1AF36D00)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AF36CE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_1_OFFSET UNITYSDK_OFFSET(0x1AF36CA0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1AF36C80)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GET_USECOMPATIBLETYPECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AF362E0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_1_OFFSET UNITYSDK_OFFSET(0x1AF36D30)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AF36D10)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SORTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AF36E00)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF36E30)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A5D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverter_TypeDefinitionIndex = 2619;

	class TypeConverter : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_useCompatibleTypeConversion()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypeConverter_TypeDefinitionIndex)->GetStaticField(0x8F50);
		}
		// static const ::System::String* s_UseCompatibleTypeConverterBehavior; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_UseCompatibleTypeConversion()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GET_USECOMPATIBLETYPECONVERSION_OFFSET))();
		}

		::System::Boolean CanConvertFrom(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_OFFSET))(this, a1);
		}

		::System::Boolean CanConvertFrom_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanConvertTo(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_OFFSET))(this, a1);
		}

		::System::Boolean CanConvertTo_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFrom(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_OFFSET))(this, a1);
		}

		::System::Object* ConvertFrom_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ConvertFromInvariantString(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_OFFSET))(this, a1);
		}

		::System::Object* ConvertFromInvariantString_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFromString(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_OFFSET))(this, a1);
		}

		::System::Object* ConvertFromString_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFromString_2(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::String* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ConvertTo(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertTo_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ConvertToInvariantString(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_OFFSET))(this, a1);
		}

		::System::String* ConvertToInvariantString_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* ConvertToString(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_OFFSET))(this, a1);
		}

		::System::String* ConvertToString_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* ConvertToString_2(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* CreateInstance(::System::Collections::IDictionary* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_OFFSET))(this, a1);
		}

		::System::Object* CreateInstance_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Collections::IDictionary* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_1_OFFSET))(this, a1, a2);
		}

		::System::Exception* GetConvertFromException(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTFROMEXCEPTION_OFFSET))(this, a1);
		}

		::System::Exception* GetConvertToException(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTTOEXCEPTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetCreateInstanceSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET))(this);
		}

		::System::Boolean GetCreateInstanceSupported_1(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_1_OFFSET))(this, a1);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* a1)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_OFFSET))(this, a1);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_1_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties_2(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2, ::Il2CppArray<::System::Attribute*>* a3)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetPropertiesSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this);
		}

		::System::Boolean GetPropertiesSupported_1(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_1_OFFSET))(this, a1);
		}

		::System::Collections::ICollection* GetStandardValues()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues_1(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_1_OFFSET))(this, a1);
		}

		::System::Boolean GetStandardValuesExclusive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this);
		}

		::System::Boolean GetStandardValuesExclusive_1(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_1_OFFSET))(this, a1);
		}

		::System::Boolean GetStandardValuesSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this);
		}

		::System::Boolean GetStandardValuesSupported_1(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_1_OFFSET))(this, a1);
		}

		::System::Boolean IsValid(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_OFFSET))(this, a1);
		}

		::System::Boolean IsValid_1(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_1_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::PropertyDescriptorCollection* SortProperties(::System::ComponentModel::PropertyDescriptorCollection* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptorCollection*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SORTPROPERTIES_OFFSET))(this, a1, a2);
		}
	};
}
