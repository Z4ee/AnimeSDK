#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class FloatSplitter; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C0C1470)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C0C1480)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1C0C1550)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0C1640)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C1600)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int FloatSplitter_FloatSplitter_UnityGeneratedFormatter_TypeDefinitionIndex = 30916;

	class FloatSplitter_FloatSplitter_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(FloatSplitter_FloatSplitter_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x24F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER_FLOATSPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
