#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Data/SqlTypes/SqlBinary.h"
#include "unitysdk/System/Data/SqlTypes/SqlBoolean.h"
#include "unitysdk/System/Data/SqlTypes/SqlByte.h"
#include "unitysdk/System/Data/SqlTypes/SqlDateTime.h"
#include "unitysdk/System/Data/SqlTypes/SqlDecimal.h"
#include "unitysdk/System/Data/SqlTypes/SqlDouble.h"
#include "unitysdk/System/Data/SqlTypes/SqlGuid.h"
#include "unitysdk/System/Data/SqlTypes/SqlInt16.h"
#include "unitysdk/System/Data/SqlTypes/SqlInt32.h"
#include "unitysdk/System/Data/SqlTypes/SqlInt64.h"
#include "unitysdk/System/Data/SqlTypes/SqlMoney.h"
#include "unitysdk/System/Data/SqlTypes/SqlSingle.h"
#include "unitysdk/System/Data/SqlTypes/SqlString.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Data::SqlTypes { class SqlBytes; }
namespace System::Data::SqlTypes { class SqlChars; }

#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPE2_OFFSET UNITYSDK_OFFSET(0x1DD754E0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1DD75370)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORXML_OFFSET UNITYSDK_OFFSET(0x1DD76290)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTSTRINGTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DD752B0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBINARY_OFFSET UNITYSDK_OFFSET(0x1DD74B00)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DD746C0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTES_OFFSET UNITYSDK_OFFSET(0x1DD75130)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTE_OFFSET UNITYSDK_OFFSET(0x1DD6FC30)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLCHARS_OFFSET UNITYSDK_OFFSET(0x1DD74FB0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDATETIME_OFFSET UNITYSDK_OFFSET(0x1DD74480)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x1DD721C0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DD71390)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLGUID_OFFSET UNITYSDK_OFFSET(0x1DD748D0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT16_OFFSET UNITYSDK_OFFSET(0x1DD6FE40)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT32_OFFSET UNITYSDK_OFFSET(0x1DD701F0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT64_OFFSET UNITYSDK_OFFSET(0x1DD70800)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLMONEY_OFFSET UNITYSDK_OFFSET(0x1DD73B00)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSINGLE_OFFSET UNITYSDK_OFFSET(0x1DD72E00)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSTRING_OFFSET UNITYSDK_OFFSET(0x1DD74D20)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlConvert_TypeDefinitionIndex = 38752;

	class SqlConvert : public ::System::Object
	{
	public:
		static ::System::Data::SqlTypes::SqlByte ConvertToSqlByte(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTE_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlInt16 ConvertToSqlInt16(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT16_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlInt32 ConvertToSqlInt32(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT32_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlInt64 ConvertToSqlInt64(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT64_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDouble ConvertToSqlDouble(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDOUBLE_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDecimal ConvertToSqlDecimal(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDECIMAL_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlSingle ConvertToSqlSingle(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSINGLE_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlMoney ConvertToSqlMoney(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLMONEY_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDateTime ConvertToSqlDateTime(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlDateTime(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDATETIME_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlBoolean ConvertToSqlBoolean(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBOOLEAN_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlGuid ConvertToSqlGuid(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlGuid(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLGUID_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlBinary ConvertToSqlBinary(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlBinary(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBINARY_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlString ConvertToSqlString(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlString(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSTRING_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlChars* ConvertToSqlChars(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlChars*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLCHARS_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlBytes* ConvertToSqlBytes(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlBytes*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTES_OFFSET))(value);
		}

		static ::System::DateTimeOffset ConvertStringToDateTimeOffset(::System::String* value, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTSTRINGTODATETIMEOFFSET_OFFSET))(value, formatProvider);
		}

		static ::System::Object* ChangeTypeForDefaultValue(::System::Object* value, ::System::Type* type, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORDEFAULTVALUE_OFFSET))(value, type, formatProvider);
		}

		static ::System::Object* ChangeType2(::System::Object* value, ::System::Data::Common::StorageType stype, ::System::Type* type, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Data::Common::StorageType, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPE2_OFFSET))(value, stype, type, formatProvider);
		}

		static ::System::Object* ChangeTypeForXML(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORXML_OFFSET))(value, type);
		}
	};
}
