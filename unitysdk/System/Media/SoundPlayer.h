#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class AsyncCompletedEventArgs; }
namespace System::ComponentModel { class AsyncCompletedEventHandler; }
namespace System::IO { class Stream; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MEDIA_SOUNDPLAYER_ADD_LOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A0FDC70)
#define SYSTEM_MEDIA_SOUNDPLAYER_ADD_SOUNDLOCATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A0FDCF0)
#define SYSTEM_MEDIA_SOUNDPLAYER_ADD_STREAMCHANGED_OFFSET UNITYSDK_OFFSET(0x1A0FDD70)
#define SYSTEM_MEDIA_SOUNDPLAYER_GET_ISLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A0FDA30)
#define SYSTEM_MEDIA_SOUNDPLAYER_GET_LOADTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A0FDA70)
#define SYSTEM_MEDIA_SOUNDPLAYER_GET_SOUNDLOCATION_OFFSET UNITYSDK_OFFSET(0x1A0FDAF0)
#define SYSTEM_MEDIA_SOUNDPLAYER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1A0FDB70)
#define SYSTEM_MEDIA_SOUNDPLAYER_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A0FDBF0)
#define SYSTEM_MEDIA_SOUNDPLAYER_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x1A0FDE30)
#define SYSTEM_MEDIA_SOUNDPLAYER_LOAD_OFFSET UNITYSDK_OFFSET(0x1A0FDDF0)
#define SYSTEM_MEDIA_SOUNDPLAYER_ONLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A0FDE70)
#define SYSTEM_MEDIA_SOUNDPLAYER_ONSOUNDLOCATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A0FDEB0)
#define SYSTEM_MEDIA_SOUNDPLAYER_ONSTREAMCHANGED_OFFSET UNITYSDK_OFFSET(0x1A0FDEF0)
#define SYSTEM_MEDIA_SOUNDPLAYER_PLAYLOOPING_OFFSET UNITYSDK_OFFSET(0x1A0FDF70)
#define SYSTEM_MEDIA_SOUNDPLAYER_PLAYSYNC_OFFSET UNITYSDK_OFFSET(0x1A0FDFB0)
#define SYSTEM_MEDIA_SOUNDPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1A0FDF30)
#define SYSTEM_MEDIA_SOUNDPLAYER_REMOVE_LOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A0FDCB0)
#define SYSTEM_MEDIA_SOUNDPLAYER_REMOVE_SOUNDLOCATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A0FDD30)
#define SYSTEM_MEDIA_SOUNDPLAYER_REMOVE_STREAMCHANGED_OFFSET UNITYSDK_OFFSET(0x1A0FDDB0)
#define SYSTEM_MEDIA_SOUNDPLAYER_SET_LOADTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A0FDAB0)
#define SYSTEM_MEDIA_SOUNDPLAYER_SET_SOUNDLOCATION_OFFSET UNITYSDK_OFFSET(0x1A0FDB30)
#define SYSTEM_MEDIA_SOUNDPLAYER_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1A0FDBB0)
#define SYSTEM_MEDIA_SOUNDPLAYER_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1A0FDC30)
#define SYSTEM_MEDIA_SOUNDPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1A0FDFF0)
#define SYSTEM_MEDIA_SOUNDPLAYER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A0FE030)
#define SYSTEM_MEDIA_SOUNDPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0FD970)
#define SYSTEM_MEDIA_SOUNDPLAYER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A0FD9B0)
#define SYSTEM_MEDIA_SOUNDPLAYER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A0FD9F0)
#define SYSTEM_MEDIA_SOUNDPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FD930)

namespace System::Media
{
	inline static constexpr unsigned int SoundPlayer_TypeDefinitionIndex = 4150;

	class SoundPlayer : public ::System::ComponentModel::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER__CTOR_1_OFFSET))(this, stream);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER__CTOR_2_OFFSET))(this, serializationInfo, context);
		}

		::System::Void _ctor_3(::System::String* soundLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER__CTOR_3_OFFSET))(this, soundLocation);
		}

		::System::Boolean get_IsLoadCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_GET_ISLOADCOMPLETED_OFFSET))(this);
		}

		::System::Int32 get_LoadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_GET_LOADTIMEOUT_OFFSET))(this);
		}

		::System::Void set_LoadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_SET_LOADTIMEOUT_OFFSET))(this, value);
		}

		::System::String* get_SoundLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_GET_SOUNDLOCATION_OFFSET))(this);
		}

		::System::Void set_SoundLocation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_SET_SOUNDLOCATION_OFFSET))(this, value);
		}

		::System::IO::Stream* get_Stream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_Stream(::System::IO::Stream* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_SET_STREAM_OFFSET))(this, value);
		}

		::System::Object* get_Tag()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_SET_TAG_OFFSET))(this, value);
		}

		::System::Void add_LoadCompleted(::System::ComponentModel::AsyncCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_ADD_LOADCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_LoadCompleted(::System::ComponentModel::AsyncCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_REMOVE_LOADCOMPLETED_OFFSET))(this, value);
		}

		::System::Void add_SoundLocationChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_ADD_SOUNDLOCATIONCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_SoundLocationChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_REMOVE_SOUNDLOCATIONCHANGED_OFFSET))(this, value);
		}

		::System::Void add_StreamChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_ADD_STREAMCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_StreamChanged(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_REMOVE_STREAMCHANGED_OFFSET))(this, value);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_LOAD_OFFSET))(this);
		}

		::System::Void LoadAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_LOADASYNC_OFFSET))(this);
		}

		::System::Void OnLoadCompleted(::System::ComponentModel::AsyncCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_ONLOADCOMPLETED_OFFSET))(this, e);
		}

		::System::Void OnSoundLocationChanged(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_ONSOUNDLOCATIONCHANGED_OFFSET))(this, e);
		}

		::System::Void OnStreamChanged(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_ONSTREAMCHANGED_OFFSET))(this, e);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void PlayLooping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_PLAYLOOPING_OFFSET))(this);
		}

		::System::Void PlaySync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_PLAYSYNC_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_STOP_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SOUNDPLAYER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
