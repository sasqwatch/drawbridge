/*

	Drawbridge header
	Currently not complete (yet?)
  
*/

/* Enums */

enum SignalMode : int32_t
{
  ObjectSignaling = 0x0,
  ObjectClosing = 0x1,
};

enum PalObjectType : int32_t
{
  DK_TYPE_NULL = 0x0,
  DK_TYPE_STREAM = 0x1,
  DK_TYPE_STREAM_EVENT = 0x2,
  DK_TYPE_EVENT = 0x3,
  DK_TYPE_SEMAPHORE = 0x4,
  DK_TYPE_THREAD = 0x5,
  DK_TYPE_FILEENUM = 0x6,
  DK_TYPE_ASYNCIO = 0x7,
  DK_TYPE_ODBC = 0x8,
  DK_TYPE_KAIO = 0x9,
  DK_TYPE_SOCKIO = 0xA,
  DK_TYPE_NETWORKIOPORT = 0xB,
  DK_TYPE_MAX = 0xC,
};

enum PalStreamType : int32_t
{
  DK_STREAM_NULL = 0x0,
  DK_STREAM_VFS = 0x1,
  DK_STREAM_SOCKET = 0x2,
  DK_STREAM_STDIN = 0x3,
  DK_STREAM_STDOUT = 0x4,
  DK_STREAM_STDERR = 0x5,
  DK_STREAM_DNS = 0x6,
  DK_STREAM_SIGNAL = 0x7,
  DK_STREAM_ASYNC_IO = 0x8,
  DK_STREAM_SHM = 0x9,
  DK_STREAM_PROTECT_DATA = 0xA,
  DK_STREAM_SEMAPHORE = 0xB,
  DK_STREAM_CRYPT_COMMON = 0xC,
  DK_STREAM_ASYM_KEY = 0xD,
  DK_STREAM_SYM_KEY = 0xE,
  DK_STREAM_KERBEROS = 0xF,
  DK_STREAM_SSL = 0x10,
  DK_STREAM_ODBC = 0x11,
  DK_STREAM_CRYPT_HASH = 0x12,
  DK_STREAM_TRACE = 0x13,
  DK_STREAM_PAM = 0x14,
  DK_STREAM_MAX = 0x15,
};

enum ExtraFileFlags : int32_t
{
  NoExtraFlags = 0x0,
  UnlinkOnCreate = 0x1,
  FlushOnWrite = 0x2,
  DeleteOnClose = 0x4,
  OpenPmemMapped = 0x8,
};

enum _DK_SOCKET_PROTOCOL : int32_t
{
  DK_SOCKET_PROTOCOL_IPV4 = 0x0,
  DK_SOCKET_PROTOCOL_IPV6 = 0x1,
};

enum SocketStreamState : int32_t
{
  DK_SOCK_INVALID = 0x0,
  DK_SOCK_OPEN = 0x1,
  DK_SOCK_BIND = 0x2,
  DK_SOCK_LISTEN = 0x3,
  DK_SOCK_CONNECTING = 0x4,
  DK_SOCK_CONNECTED = 0x5,
  DK_SOCK_CLOSED = 0x6,
};

enum PalOsType : int32_t
{
  Invalid_1 = 0x0,
  Windows = 0x1,
  StubOS = 0x2,
};

enum _DK_STREAM_QUERY_FLAGS : int32_t
{
  DK_FILE_STANDARD_INFORMATION = 0x1,
  DK_FILE_ID_INFORMATION = 0x2,
  DK_FILE_BASIC_INFORMATION = 0x4,
  DK_FILE_FS_SIZE_INFORMATION = 0x8,
  DK_FILE_FS_SECTOR_SIZE_INFORMATION = 0x10,
  DK_FILE_ALL_INFORMATION = 0x1F,
};

enum _DK_STREAM_OPEN_DISPOSITION : int32_t
{
  DK_STREAM_SUPERSEDE = 0x0,
  DK_STREAM_OPEN_EXISTING = 0x1,
  DK_STREAM_CREATE_NEW = 0x2,
  DK_STREAM_OPEN_ALWAYS = 0x3,
  DK_STREAM_OVERWRITE_EXISTING = 0x4,
  DK_STREAM_CREATE_ALWAYS = 0x5,
};

enum _DK_CLOCK_TYPE : int32_t
{
  DK_CURRENT_SYSTEM_CLOCK = 0x0,
  DK_FORWARD_MOVING_ONLY_CLOCK = 0x1,
};

enum _DK_FREE_TYPE : int32_t
{
  DK_INVALID_FREE_TYPE = 0x0,
  DK_MEM_DECOMMIT = 0x1,
  DK_MEM_RELEASE = 0x2,
  DK_MEM_DONTNEED = 0x4,
};

enum _DK_SOCKET_STREAM_CONTROL_OPCODE : int32_t
{
  DK_SOCKET_STREAM_CONTROL_BIND = 0x0,
  DK_SOCKET_STREAM_CONTROL_LISTEN = 0x1,
  DK_SOCKET_STREAM_CONTROL_ACCEPT = 0x2,
  DK_SOCKET_STREAM_CONTROL_CONNECT = 0x3,
  DK_SOCKET_STREAM_CONTROL_SET_RCVBUF_SIZE = 0x4,
  DK_SOCKET_STREAM_CONTROL_SET_SNDBUF_SIZE = 0x5,
  DK_SOCKET_STREAM_CONTROL_GET_RCVBUF_SIZE = 0x6,
  DK_SOCKET_STREAM_CONTROL_GET_SNDBUF_SIZE = 0x7,
  DK_SOCKET_STREAM_CONTROL_SET_KEEPALIVE = 0x8,
  DK_SOCKET_STREAM_CONTROL_GET_KEEPALIVE = 0x9,
  DK_SOCKET_STREAM_CONTROL_GET_ADDRESS = 0xA,
  DK_SOCKET_STREAM_CONTROL_GET_LOCAL_ADDRESS = 0xB,
  DK_SOCKET_STREAM_CONTROL_CLOSE = 0xC,
  DK_SOCKET_STREAM_CONTROL_SET_REUSEADDR = 0xD,
  DK_SOCKET_STREAM_CONTROL_GET_TCP_NODELAY = 0xE,
  DK_SOCKET_STREAM_CONTROL_SET_TCP_NODELAY = 0xF,
  DK_SOCKET_STREAM_CONTROL_REGISTER_FOR_EVENTS = 0x10,
  DK_SOCKET_STREAM_CONTROL_REGISTER_WITH_IO_PORT = 0x11,
  DK_SOCKET_STREAM_CONTROL_CANCEL_WRITE = 0x12,
  DK_SOCKET_STREAM_CONTROL_CANCEL_READ = 0x13,
  DK_SOCKET_STREAM_CONTROL_EXCHANGE_DEBUG_INFO = 0x14,
  DK_SOCKET_STREAM_CONTROL_REARM_EVENTS = 0x15,
  DK_SOCKET_STREAM_CONTROL_GET_SOCKET_PROTOCOL = 0x16,
  DK_SOCKET_STREAM_CONTROL_SET_SOCKET_NONBLOCKING = 0x17,
  DK_SOCKET_STREAM_CONTROL_SET_SOCKET_KEEPALIVE_VALS = 0x18,
  DK_SOCKET_STREAM_CONTROL_GET_SOCKET_CONTENT_FROM_DKMON = 0x19,
  DK_SOCKET_STREAM_CONTROL_GET_SOCKET_LOCAL_ADDR = 0x1A,
  DK_SOCKET_STREAM_CONTROL_GET_SOCKET_REMOTE_ADDR = 0x1B,
  DK_SOCKET_STREAM_CONTROL_GET_SOCKET_LINGER = 0x1C,
  DK_SOCKET_STREAM_CONTROL_SET_SOCKET_LINGER = 0x1D,
  DK_SOCKET_STREAM_CONTROL_SET_SOCKET_IPV6_V6ONLY = 0x1E,
  DK_SOCKET_STREAM_CONTROL_REBIND_SOCKET = 0x1F,
  DK_SOCKET_STREAM_CONTROL_DEBUG_WRITEV = 0x3E8,
  DK_SOCKET_STREAM_CONTROL_INVALID_OPCODE = 0xFFFE,
};

enum _DK_INPUT_EVENT_TYPE : int32_t
{
  DK_KEY_EVENT = 0x0,
  DK_MOUSE_EVENT = 0x1,
};

enum _DK_KEY_INPUT_EVENT_TYPE : int32_t
{
  DK_KEY_DOWN = 0x0,
  DK_KEY_UP = 0x1,
};

enum _DK_MOUSE_INPUT_EVENT_FLAGS : int32_t
{
  DK_MOUSE_MOVE = 0x1,
  DK_MOUSE_LEFT_DOWN = 0x2,
  DK_MOUSE_LEFT_UP = 0x4,
  DK_MOUSE_RIGHT_DOWN = 0x8,
  DK_MOUSE_RIGHT_UP = 0x10,
  DK_MOUSE_RELATIVE_COORDS = 0x20,
};

enum _DK_EXCEPTION_TYPE : int32_t
{
  DK_UNKNOWN_EXCEPTION = 0x0,
  DK_PAGE_FAULT = 0x1,
  DK_SOFTWARE_INTERRUPT = 0x2,
  DK_ILLEGAL_HARDWARE_INSTRUCTION = 0x3,
  DK_ILLEGAL_SYSTEM_CALL = 0x4,
  DK_INTEGER_OVERFLOW = 0x5,
  DK_DIVISION_FAULT = 0x6,
};

enum _DK_MEMORY_ACCESS_TYPE : int32_t
{
  DK_MEMORY_ACCESS_UNKNOWN = 0x0,
  DK_MEMORY_READ = 0x1,
  DK_MEMORY_WRITE = 0x2,
  DK_MEMORY_EXECUTE = 0x4,
};

enum _DK_SOFTWARE_INTERRUPT_TYPE : int32_t
{
  DK_SOFTWARE_INTERRUPT_UNKNOWN = 0x0,
  DK_BREAKPOINT_INSTRUCTION = 0x1,
  DK_INTERRUPT_INSTRUCTION = 0x2,
  DK_RAISED_SOFTWARE_EXCEPTION = 0x3,
};


enum _Enclave_DK_ENCLAVE_PAGE_PROTECTION_v1 : int32_t
{
  DK_ENCLAVE_PAGE_NO_ACCESS = 0x0,
  DK_ENCLAVE_PAGE_READ = 0x1,
  DK_ENCLAVE_PAGE_WRITE = 0x2,
  DK_ENCLAVE_PAGE_EXECUTE = 0x8,
  DK_ENCLAVE_PAGE_THREAD_CONTROL = 0x10000,
  DK_ENCLAVE_PAGE_UNVALIDATED = 0x20000,
};

/* Structures */

struct _DK_OPAQUE_OBJECT;
typedef struct _DK_OPAQUE_OBJECT *DKHANDLE;

struct _DK_CONSOLE_PARAMETERS
{
  ULONG VideoId;
  PVOID FrameBuffer;
  ULONG BitsPerPixel;
  ULONG WidthInPixels;
  ULONG HeightInPixels;
  ULONG ScanLineInBytes;
};

struct _DK_MOUSE_INPUT_EVENT
{
  DK_MOUSE_INPUT_EVENT_FLAGS Flags;
  ULONG X;
  ULONG Y;
};

struct _DK_RECTANGLE
{
  ULONG Left;
  ULONG Top;
  ULONG Right;
  ULONG Bottom;
};

struct WINDOWS_LIBOS_PARAMETERS
{
  ULONG HeaderLength;
  ULONG Length;
  ULONG Version;
  ULONG HostAbiVersion;
  WINDOWS_LIBOS_FLAGS Flags;
  ULONG ExternalPid;
  ULONG NtGlobalFlag;
  ULONG64 KernalTraceFlags; /* Not my typo */
  ULONG DesktopWidth;
  ULONG DesktopHeight;
  LONG VirtualMonitorCount;
  ULONG PhysicalMemorySize;
  ULONG64 VirtualMemoryStart;
  ULONG64 VirtualMemoryEnd;
  ULONG NumberOfProcessors;
  USHORT LanguageId;
  ContainerType ContainerTypeEntry;
  EnclaveType EnclaveTypeEntry;
  PARAMETER_DESCRIPTOR RegistryUris;
  PARAMETER_DESCRIPTOR RegistryOutput;
  PARAMETER_DESCRIPTOR PersistentRegistryHives;
  PARAMETER_DESCRIPTOR KnownDlls;
  UNIONFS_DEFINITION FsDefinition;
  PARAMETER_DESCRIPTOR ScratchFolderUri;
  PARAMETER_DESCRIPTOR AppVfsPath;
  PARAMETER_DESCRIPTOR ApplicationArguments;
  PARAMETER_DESCRIPTOR Environment;
  PARAMETER_DESCRIPTOR WorkingDirPath;
  PARAMETER_DESCRIPTOR HostName;
  PARAMETER_DESCRIPTOR DomainName;
  PARAMETER_DESCRIPTOR AddressList;
  PARAMETER_DESCRIPTOR PortMappings;
  PARAMETER_DESCRIPTOR TimeZoneKeyName;
  BOOLEAN DaylightTimeEnabled;
  PARAMETER_DESCRIPTOR StandardInput;
  PARAMETER_DESCRIPTOR StandardOutput;
  PARAMETER_DESCRIPTOR StandardError;
  PARAMETER_DESCRIPTOR ClockStreamUri;
  PARAMETER_DESCRIPTOR ProcessorConfiguration;
  PARAMETER_DESCRIPTOR HostOsName;
  PARAMETER_DESCRIPTOR HostOsDistributionName;
  PARAMETER_DESCRIPTOR HostOsReleaseName;
  PARAMETER_DESCRIPTOR HostOsExtendedReleaseName;
  PARAMETER_DESCRIPTOR HostOsFullDistributionName;
  PARAMETER_DESCRIPTOR BuildStamp;
  ULONG TraceFlagEntryCount;
  ULONG TraceFlagEntryTableOffset;
  HeRingBufferInfo **HeRingBufferInfoList;
  LONG64 TimerQuantumInMilliSeconds;
  ULONG64 DbgStaticsAddress;
};

struct _DK_PROCESS_CREATE_PARAMETERS_ENV
{
  ULONG Count;
  PDK_KEY_VALUE_PAIR Pairs;
};

struct _DK_PROCESS_CREATE_PARAMETERS
{
  UNICODE_STRING ApplicationVfsPath;
  UNICODE_STRING ApplicationArguments;
  struct _DK_PROCESS_CREATE_PARAMETERS_ENV EnvironmentVariables;
  DKHANDLE StandardInput;
  DKHANDLE StandardOutput;
  DKHANDLE StandardError;
};

struct _DK_STREAM_ATTRIBUTES
{
  DK_STREAM_TYPE_FLAGS Flags;
  LONG64 CreationTime;
  LONG64 LastWriteTime;
  LONG64 FileAllocationSize;
  LONG64 FileLength;
  LONG64 TotalDirectorySize;
  LONG64 AvailableDirectorySize;
  ULONG LogicalBlockSize;
  ULONG PhysicalBlockSize;
  ULONG UniqueIdLength;
  M128 UniqueId;
};

union _DK_THREAD_START_PARAMETERS_HostParameter
{
  PVOID Pointer;
  ULONG64 U64;
};

struct _DK_THREAD_START_PARAMETERS
{
  union _DK_THREAD_START_PARAMETERS_HostParameter HostParameter;
};

struct _DK_THREAD_REGISTER_VALUES_X64
{
  ULONG64 FsBase;
  ULONG64 GsBase;
};

typedef _DK_THREAD_REGISTER_VALUES_X64 DK_THREAD_REGISTER_VALUES;

struct _DK_THREAD_CREATE_PARAMETERS
{
  DK_THREAD_REGISTER_VALUES RegisterValues;
};

/* Functions */

DKSTATUS  VirtualMemoryAllocate(PVOID DesiredAddress, SIZE_T DesiredLength, DK_ALLOCATION_TYPE AllocationType, DK_PAGE_PROTECTION Protect, PVOID *BaseAddress, PSIZE_T RegionLength);
DKSTATUS  VirtualMemoryFree(PVOID BaseAddress, SIZE_T RegionLength, DK_FREE_TYPE FreeType);
DKSTATUS  VirtualMemoryProtect(PVOID BaseAddress, SIZE_T RegionLength, DK_PAGE_PROTECTION NewProtect);
DKSTATUS  ObjectReference(DKHANDLE Handle);
DKSTATUS  ObjectClose(DKHANDLE Handle);
DKSTATUS  ObjectsWaitAny(ULONG ObjectCount, const DKHANDLE *Objects, PLONG64 Timeout, PULONG SignaledObjectIndex);
DKSTATUS  SemaphoreCreate(LONG InitialCount, LONG MaximumCount, PDKHANDLE Semaphore);
DKSTATUS  SemaphoreRelease(DKHANDLE Semaphore, LONG ReleaseCount);
DKSTATUS  SemaphoreReleaseEx(DKHANDLE Semaphore, LONG ReleaseCount, PLONG PreviousCount);
DKSTATUS  SemaphorePeek(DKHANDLE Semaphore, PLONG CurrentCount);
DKSTATUS  NotificationEventCreate(BOOLEAN InitialState, PDKHANDLE Event);
DKSTATUS  SynchronizationEventCreate(BOOLEAN InitialState, PDKHANDLE Event);
DKSTATUS  EventSet(DKHANDLE Event, PBOOLEAN PreviousState);
DKSTATUS  EventClear(DKHANDLE Event);
DKSTATUS  EventPeek(DKHANDLE Event, PBOOLEAN Signaled);
DKSTATUS  AsyncPoll(DKHANDLE AsyncRequest, PDK_ASYNC_RESULTS Results);
DKSTATUS  AsyncCancel(DKHANDLE AsyncRequest);
DKSTATUS  StreamOpen(PDKHANDLE Handle, PCUNICODE_STRING URI, DK_ACCESS_MASK DesiredAccess, DK_STREAM_SHARE_FLAGS ShareFlags, DK_STREAM_OPEN_DISPOSITION OpenDisposition, DK_STREAM_OPEN_OPTIONS OpenOptions, const DK_OPEN_OPTIONS *);
DKSTATUS  StreamRead(DKHANDLE Stream, ULONG64 ReadOffset, ULONG BytesToRead, PVOID Buffer, PDKHANDLE AsyncRequestHandle);
DKSTATUS  StreamWrite(DKHANDLE Stream, ULONG64 WriteOffset, ULONG BytesToWrite, const void *Buffer, PDKHANDLE AsyncRequestHandle);
DKSTATUS  StreamReadScatter(DKHANDLE Stream, ULONG64 ReadOffset, ULONG SegmentCount, PVOID SegmentBufferList, PDKHANDLE AsyncRequestHandle);
DKSTATUS  StreamWriteGather(DKHANDLE Stream, ULONG64 WriteOffset, ULONG SegmentCount, const void *SegmentBufferList, PDKHANDLE AsyncRequestHandle);
DKSTATUS  StreamSetLength(DKHANDLE Stream, ULONG64 Length);
DKSTATUS  StreamFlush(DKHANDLE Stream);
DKSTATUS  StreamDelete(DKHANDLE Stream);
DKSTATUS  StreamGetEvent(DKHANDLE Stream, DK_STREAM_EVENT_ID EventId, PDKHANDLE Event);
DKSTATUS  StreamRename(DKHANDLE Stream, const UNICODE_STRING *NewURI);
DKSTATUS  StreamMap(DKHANDLE Stream, PVOID DesiredAddress, DK_STREAM_MAP_FLAGS Flags, DK_PAGE_PROTECTION Protect, ULONG64 Offset, PSIZE_T ViewLength, PSIZE_T MappingLength, PVOID *MappedAddress);
DKSTATUS  StreamMapPeBinary(DKHANDLE Stream, PVOID DesiredAddress, DK_STREAM_MAP_FLAGS, PSIZE_T ViewLength, PVOID *MappedAddress);
DKSTATUS  RandomBitsRead(PVOID Buffer, SIZE_T Length);
DKSTATUS  StreamUnmap(PVOID Address, SIZE_T Size);
DKSTATUS  StreamEnumerateChildren(DKHANDLE Stream, PDKHANDLE EnumerationHandle, PUNICODE_STRING FileName);
DKSTATUS  ThreadSetRegisters(const DK_THREAD_REGISTER_VALUES *RegisterValues);
DKSTATUS  ThreadCreate(PLIBOS_ThreadStart StartAddress, PVOID GuestParameter, PVOID InitialStackPointer, const DK_THREAD_CREATE_PARAMETERS *Parameters, PDKHANDLE Thread);
DKSTATUS  ThreadInterrupt(DKHANDLE Thread);
DKSTATUS  ProcessCreate(const DK_PROCESS_CREATE_PARAMETERS *Parameters, PDKHANDLE Process, PDKHANDLE InitialThread);
DKSTATUS  ProcessGetExitCode(DKHANDLE Process, PULONG ExitCode);
DKSTATUS  ProcessTerminate(DKHANDLE Process, ULONG ExitCode);
DKSTATUS  SystemTimeQuery(DK_CLOCK_TYPE ClockType, PLONG64 SystemTime);
DKSTATUS  InstructionCacheFlush(PVOID BaseAddress, SIZE_T Length);
DKSTATUS  ExceptionRecordFree(const DK_EXCEPTION *Exception);
DKSTATUS  ConsoleCreate(const DK_CONSOLE_PARAMETERS *Parameters, PDKHANDLE Console);
DKSTATUS  ConsoleNotifyUpdate(DKHANDLE Console, const DK_RECTANGLE *UpdatedRectangle);
DKSTATUS  ConsoleEventPoll(DKHANDLE Console, PDK_INPUT_EVENT Events, ULONG MaxEventCount, PULONG NumberOfEventsRead);
DKSTATUS  StreamChangesRegister(DKHANDLE Stream, ULONG Filter, BOOLEAN WatchTree, PDKHANDLE Event);
DKSTATUS  StreamChangesPoll(DKHANDLE Stream, PUNICODE_STRING FileName, PULONG Flags);
DKSTATUS  StreamRangeLock(DKHANDLE Stream, ULONG64 Offset, ULONG64 Length, BOOLEAN FailImmediately, BOOLEAN ExclusiveLock, PDKHANDLE AsyncRequestHandle);
DKSTATUS  StreamRangeUnlock(DKHANDLE Stream, ULONG64 Offset, ULONG64 Length);
DKSTATUS  StreamEnableSparse(DKHANDLE Stream, BOOLEAN IsSparse);
DKSTATUS  StreamQueryAllocatedRanges(DKHANDLE Stream, const DK_FILE_RANGE *RangeToQuery, ULONG MaxRangesCount, PDK_FILE_RANGE AllocatedRanges, PULONG AllocatedRangesReturned);
DKSTATUS  StreamSetZeroData(DKHANDLE Stream, const DK_FILE_RANGE *RangeToZeroOut);
DKSTATUS  AsyncCancelPumpIoRequest(const DK_CANCEL_PUMP_IO_REQUEST_DATA *IoRequestData);
DKSTATUS  Syscall(ULONG64 abiIdAndVersion, SIZE_T inSize, const void *inBuffer, SIZE_T outPtrSize, const void *outPtrBuffer);
DKSTATUS  StreamEventSelect(DKHANDLE Stream, DKHANDLE Event, ULONG PollEvents, PDKHANDLE AsyncRequestHandle);
DKSTATUS  StreamEventEnum(DKHANDLE Stream, DKHANDLE Event, PVOID EventEnumInfo, PDKHANDLE AsyncRequestHandle);
DKSTATUS  PacketAssociate(DKHANDLE WaitCompletionPacketHandle, DKHANDLE IoCompletionHandle, DKHANDLE TargetObjectHandle, PVOID KeyContext, PVOID ApcContext, DKSTATUS IoStatus, ULONG_PTR IoStatusInformation, PBOOLEAN AlreadySignaled);
DKSTATUS  PacketCreate(PDKHANDLE WaitCompletionPacketHandle);
DKSTATUS  UnimplementedAbiCall();
DKSTATUS  Enclave_LoadData(PVOID loadAddress, SIZE_T size, const void *buffer, DK_ENCLAVE_PAGE_PROTECTION_V1 protect, PULONG sgxError);
DKSTATUS  Enclave_InitializeSgx(PVOID enclaveBaseAddress, const void *sigStructIn, PULONG sgxError);
void  Enclave_NotifyThreadCreate(PVOID tcsAddress);
DKSTATUS  Enclave_PagesRemove(PVOID address, SIZE_T size);
DKSTATUS  Enclave_LoadPeBinary(PVOID LoadAddress, DKHANDLE Stream, const UNICODE_STRING *ImageName);
DKSTATUS  Enclave_PagesCommit(PVOID address, SIZE_T size);
DKSTATUS  Enclave_CallVbs(PVOID EnclaveRoutine, PVOID Parameter, PVOID *ReturnValue);
DKSTATUS  Enclave_CreateVbs(PVOID EnclaveBaseAddress, SIZE_T EnclaveSize, DK_ENCLAVE_VBS_FLAGS_V1 Flags);
DKSTATUS  Enclave_PagesProtect(PVOID address, SIZE_T size, DK_ENCLAVE_PAGE_PROTECTION_V1 protect);
DKSTATUS  Enclave_CreateSgx(PVOID enclaveBaseAddress, SIZE_T enclaveSize, const void *secsIn, PULONG sgxError);
DKSTATUS  Enclave_InitializeVbs(PVOID EnclaveBaseAddress, ULONG ThreadCount);
DKSTATUS  Enclave_Delete(PVOID enclaveBaseAddress);
DKSTATUS  Enclave_PagesFree(PVOID address, SIZE_T size);

/* Function typedefs */

typedef DKSTATUS DKAPI_AsyncCancel(DKHANDLE);
typedef DKSTATUS DKAPI_AsyncPoll(DKHANDLE, PDK_ASYNC_RESULTS);
typedef DKSTATUS DKAPI_ConsoleCreate(const DK_CONSOLE_PARAMETERS *, PDKHANDLE);
typedef DKSTATUS DKAPI_ConsoleEventPoll(DKHANDLE, PDK_INPUT_EVENT, ULONG, PULONG);
typedef DKSTATUS DKAPI_ConsoleNotifyUpdate(DKHANDLE, const DK_RECTANGLE *);
typedef void DKAPI_DebugStringPrint(const ASCII_STRING *);
typedef DKSTATUS DKAPI_EventClear(DKHANDLE);
typedef DKSTATUS DKAPI_EventPeek(DKHANDLE, PBOOLEAN);
typedef DKSTATUS DKAPI_EventSet(DKHANDLE, PBOOLEAN);
typedef DKSTATUS DKAPI_ExceptionRecordFree(const DK_EXCEPTION *);
typedef DKSTATUS DKAPI_InstructionCacheFlush(PVOID, SIZE_T);
typedef DKSTATUS DKAPI_NotificationEventCreate(BOOLEAN, PDKHANDLE);
typedef DKSTATUS DKAPI_ObjectClose(DKHANDLE);
typedef DKSTATUS DKAPI_ObjectReference(DKHANDLE);
typedef DKSTATUS DKAPI_ObjectsWaitAny(ULONG, const DKHANDLE *, PLONG64, PULONG);
typedef DKSTATUS DKAPI_ProcessCreate(const DK_PROCESS_CREATE_PARAMETERS *, PDKHANDLE, PDKHANDLE);
typedef void DKAPI_ProcessExit(ULONG);
typedef DKSTATUS DKAPI_ProcessGetExitCode(DKHANDLE, PULONG);
typedef DKSTATUS DKAPI_ProcessTerminate(DKHANDLE, ULONG);
typedef DKSTATUS DKAPI_RandomBitsRead(PVOID, SIZE_T);
typedef DKSTATUS DKAPI_SemaphoreCreate(LONG, LONG, PDKHANDLE);
typedef DKSTATUS DKAPI_SemaphorePeek(DKHANDLE, PLONG);
typedef DKSTATUS DKAPI_SemaphoreRelease(DKHANDLE, LONG);
typedef DKSTATUS DKAPI_StreamAttributesQuery(const UNICODE_STRING *, PDK_STREAM_ATTRIBUTES, PUNICODE_STRING, PULONG);
typedef DKSTATUS DKAPI_StreamAttributesQueryByHandle(DKHANDLE, DK_STREAM_QUERY_FLAGS, PDK_STREAM_ATTRIBUTES);
typedef DKSTATUS DKAPI_StreamChangesPoll(DKHANDLE, PUNICODE_STRING, PULONG);
typedef DKSTATUS DKAPI_StreamChangesRegister(DKHANDLE, ULONG, BOOLEAN, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamDelete(DKHANDLE);
typedef DKSTATUS DKAPI_StreamEnableSparse(DKHANDLE, BOOLEAN);
typedef DKSTATUS DKAPI_StreamEnumerateChildren(DKHANDLE, PDKHANDLE, PUNICODE_STRING);
typedef DKSTATUS DKAPI_StreamFlush(DKHANDLE);
typedef DKSTATUS DKAPI_StreamMap(DKHANDLE, PVOID, DK_STREAM_MAP_FLAGS, DK_PAGE_PROTECTION, ULONG64, PSIZE_T, PSIZE_T, PVOID *);
typedef DKSTATUS DKAPI_StreamMapPeBinary(DKHANDLE, PVOID, DK_STREAM_MAP_FLAGS, PSIZE_T, PVOID *);
typedef DKSTATUS DKAPI_StreamOpen(PDKHANDLE, const UNICODE_STRING *, DK_ACCESS_MASK, DK_STREAM_SHARE_FLAGS, DK_STREAM_OPEN_DISPOSITION, DK_STREAM_OPEN_OPTIONS, const DK_OPEN_OPTIONS *);
typedef DKSTATUS DKAPI_StreamQueryAllocatedRanges(DKHANDLE, const DK_FILE_RANGE *, ULONG, PDK_FILE_RANGE, PULONG);
typedef DKSTATUS DKAPI_StreamRangeLock(DKHANDLE, ULONG64, ULONG64, BOOLEAN, BOOLEAN, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamRangeUnlock(DKHANDLE, ULONG64, ULONG64);
typedef DKSTATUS DKAPI_StreamRead(DKHANDLE, ULONG64, ULONG, PVOID, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamReadScatter(DKHANDLE, ULONG64, ULONG, PVOID, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamRename(DKHANDLE, const UNICODE_STRING *);
typedef DKSTATUS DKAPI_StreamSetLength(DKHANDLE, ULONG64);
typedef DKSTATUS DKAPI_StreamSetZeroData(DKHANDLE, const DK_FILE_RANGE *);
typedef DKSTATUS DKAPI_StreamUnmap(PVOID, SIZE_T);
typedef DKSTATUS DKAPI_StreamGetEvent(DKHANDLE, DK_STREAM_EVENT_ID, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamWrite(DKHANDLE, ULONG64, ULONG, const void *, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamWriteGather(DKHANDLE, ULONG64, ULONG, const void *, PDKHANDLE);
typedef DKSTATUS DKAPI_SynchronizationEventCreate(BOOLEAN, PDKHANDLE);
typedef DKSTATUS DKAPI_SystemTimeQuery(DK_CLOCK_TYPE, PLONG64);
typedef DKSTATUS DKAPI_ThreadCreate(PLIBOS_ThreadStart, PVOID, PVOID, const DK_THREAD_CREATE_PARAMETERS *, PDKHANDLE);
typedef void DKAPI_ThreadExit(void);
typedef DKSTATUS DKAPI_ThreadInterrupt(DKHANDLE);
typedef DKSTATUS DKAPI_ThreadSetRegisters(const DK_THREAD_REGISTER_VALUES *);
typedef void DKAPI_ThreadYieldExecution(void);
typedef DKSTATUS DKAPI_VirtualMemoryAllocate(PVOID, SIZE_T, DK_ALLOCATION_TYPE, DK_PAGE_PROTECTION, PVOID *, PSIZE_T);
typedef DKSTATUS DKAPI_VirtualMemoryFree(PVOID, SIZE_T, DK_FREE_TYPE);
typedef DKSTATUS DKAPI_VirtualMemoryProtect(PVOID, SIZE_T, DK_PAGE_PROTECTION, PDK_PAGE_PROTECTION);
typedef DKSTATUS DKAPI_StreamControl(DKHANDLE, PDKHANDLE, DK_SOCKET_STREAM_CONTROL_OPCODE, PVOID, SIZE_T, PVOID, SIZE_T, PULONG);
typedef DKSTATUS DKAPI_Syscall(ULONG64, ULONG64, const void *, ULONG64, const void *);
typedef DKSTATUS DKAPI_AsyncCancelPumpIoRequest(const DK_CANCEL_PUMP_IO_REQUEST_DATA *);
typedef DKSTATUS DKAPI_SemaphoreReleaseEx(DKHANDLE, LONG, PLONG);
typedef DKSTATUS DKAPI_StreamEventSelect(DKHANDLE, DKHANDLE, ULONG, PDKHANDLE);
typedef DKSTATUS DKAPI_StreamEventEnum(DKHANDLE, DKHANDLE, PVOID, PDKHANDLE);
typedef DKSTATUS DKAPI_PacketAssociate(DKHANDLE, DKHANDLE, DKHANDLE, PVOID, PVOID, DKSTATUS, ULONG_PTR, PBOOLEAN);
typedef DKSTATUS DKAPI_PacketCreate(PDKHANDLE);
typedef DKSTATUS DKAPI_ThreadSetAffinity(DKHANDLE, USHORT, ULONG64);

typedef void LIBOS_ExceptionDispatch(const DK_EXCEPTION *, PVOID);

/* Drawbridge call table */

struct _DK_CALL_TABLE {
	ULONG                      TableLength;          /*     0     4 */
	ULONG                      ApiVersion;           /*     4     4 */
	union {
		DKAPI_AsyncCancel * Function;            /*     8     8 */
		ULONG64            U64;                  /*     8     8 */
	} AsyncCancel;                                   /*     8     8 */

	union {
		DKAPI_AsyncPoll *  Function;             /*    16     8 */
		ULONG64            U64;                  /*    16     8 */
	} AsyncPoll;                                     /*    16     8 */


	union {
		DKAPI_ConsoleCreate * Function;          /*    24     8 */
		ULONG64            U64;                  /*    24     8 */
	} ConsoleCreate;                                 /*    24     8 */


	union {
		DKAPI_ConsoleEventPoll * Function;       /*    32     8 */
		ULONG64            U64;                  /*    32     8 */
	} ConsoleEventPoll;                              /*    32     8 */


	union {
		DKAPI_ConsoleNotifyUpdate * Function;    /*    40     8 */
		ULONG64            U64;                  /*    40     8 */
	} ConsoleNotifyUpdate;                           /*    40     8 */


	union {
		DKAPI_DebugStringPrint * Function;       /*    48     8 */
		ULONG64            U64;                  /*    48     8 */
	} DebugStringPrint;                              /*    48     8 */


	union {
		DKAPI_EventClear * Function;             /*    56     8 */
		ULONG64            U64;                  /*    56     8 */
	} EventClear;                                    /*    56     8 */

	union {
		DKAPI_EventPeek *  Function;             /*    64     8 */
		ULONG64            U64;                  /*    64     8 */
	} EventPeek;                                     /*    64     8 */
	union {
		DKAPI_EventPeek *          Function;             /*     0     8 */
		ULONG64                    U64;                  /*     0     8 */
	};

	union {
		DKAPI_EventSet *   Function;             /*    72     8 */
		ULONG64            U64;                  /*    72     8 */
	} EventSet;                                      /*    72     8 */

	union {
		DKAPI_ExceptionRecordFree * Function;    /*    80     8 */
		ULONG64            U64;                  /*    80     8 */
	} ExceptionRecordFree;                           /*    80     8 */


	union {
		DKAPI_InstructionCacheFlush * Function;  /*    88     8 */
		ULONG64            U64;                  /*    88     8 */
	} InstructionCacheFlush;                         /*    88     8 */

	union {
		DKAPI_NotificationEventCreate * Function; /*    96     8 */
		ULONG64            U64;                  /*    96     8 */
	} NotificationEventCreate;                       /*    96     8 */

	union {
		DKAPI_ObjectClose * Function;            /*   104     8 */
		ULONG64            U64;                  /*   104     8 */
	} ObjectClose;                                   /*   104     8 */

	union {
		DKAPI_ObjectReference * Function;        /*   112     8 */
		ULONG64            U64;                  /*   112     8 */
	} ObjectReference;                               /*   112     8 */

	union {
		DKAPI_ObjectsWaitAny * Function;         /*   120     8 */
		ULONG64            U64;                  /*   120     8 */
	} ObjectsWaitAny;                                /*   120     8 */

	union {
		DKAPI_ProcessCreate * Function;          /*   128     8 */
		ULONG64            U64;                  /*   128     8 */
	} ProcessCreate;                                 /*   128     8 */

	union {
		DKAPI_ProcessExit * Function;            /*   136     8 */
		ULONG64            U64;                  /*   136     8 */
	} ProcessExit;                                   /*   136     8 */


	union {
		DKAPI_ProcessGetExitCode * Function;     /*   144     8 */
		ULONG64            U64;                  /*   144     8 */
	} ProcessGetExitCode;                            /*   144     8 */

	union {
		DKAPI_ProcessTerminate * Function;       /*   152     8 */
		ULONG64            U64;                  /*   152     8 */
	} ProcessTerminate;                              /*   152     8 */


	union {
		DKAPI_RandomBitsRead * Function;         /*   160     8 */
		ULONG64            U64;                  /*   160     8 */
	} RandomBitsRead;                                /*   160     8 */


	union {
		DKAPI_SemaphoreCreate * Function;        /*   168     8 */
		ULONG64            U64;                  /*   168     8 */
	} SemaphoreCreate;                               /*   168     8 */


	union {
		DKAPI_SemaphorePeek * Function;          /*   176     8 */
		ULONG64            U64;                  /*   176     8 */
	} SemaphorePeek;                                 /*   176     8 */

	union {
		DKAPI_SemaphoreRelease * Function;       /*   184     8 */
		ULONG64            U64;                  /*   184     8 */
	} SemaphoreRelease;                              /*   184     8 */

	union {
		DKAPI_StreamAttributesQuery * Function;  /*   192     8 */
		ULONG64            U64;                  /*   192     8 */
	} StreamAttributesQuery;                         /*   192     8 */

	union {
		DKAPI_StreamAttributesQueryByHandle * Function; /*   200     8 */
		ULONG64            U64;                  /*   200     8 */
	} StreamAttributesQueryByHandle;                 /*   200     8 */

	union {
		DKAPI_StreamChangesPoll * Function;      /*   208     8 */
		ULONG64            U64;                  /*   208     8 */
	} StreamChangesPoll;                             /*   208     8 */

	union {
		DKAPI_StreamChangesRegister * Function;  /*   216     8 */
		ULONG64            U64;                  /*   216     8 */
	} StreamChangesRegister;                         /*   216     8 */


	union {
		DKAPI_StreamDelete * Function;           /*   224     8 */
		ULONG64            U64;                  /*   224     8 */
	} StreamDelete;                                  /*   224     8 */

	union {
		DKAPI_StreamEnableSparse * Function;     /*   232     8 */
		ULONG64            U64;                  /*   232     8 */
	} StreamEnableSparse;                            /*   232     8 */


	union {
		DKAPI_StreamEnumerateChildren * Function; /*   240     8 */
		ULONG64            U64;                  /*   240     8 */
	} StreamEnumerateChildren;                       /*   240     8 */


	union {
		DKAPI_StreamFlush * Function;            /*   248     8 */
		ULONG64            U64;                  /*   248     8 */
	} StreamFlush;                                   /*   248     8 */

	union {
		DKAPI_StreamMap *  Function;             /*   256     8 */
		ULONG64            U64;                  /*   256     8 */
	} StreamMap;                                     /*   256     8 */


	union {
		DKAPI_StreamMapPeBinary * Function;      /*   264     8 */
		ULONG64            U64;                  /*   264     8 */
	} StreamMapPeBinary;                             /*   264     8 */


	union {
		DKAPI_StreamOpen * Function;             /*   272     8 */
		ULONG64            U64;                  /*   272     8 */
	} StreamOpen;                                    /*   272     8 */


	union {
		DKAPI_StreamQueryAllocatedRanges * Function; /*   280     8 */
		ULONG64            U64;                  /*   280     8 */
	} StreamQueryAllocatedRanges;                    /*   280     8 */


	union {
		DKAPI_StreamRangeLock * Function;        /*   288     8 */
		ULONG64            U64;                  /*   288     8 */
	} StreamRangeLock;                               /*   288     8 */

	union {
		DKAPI_StreamRangeUnlock * Function;      /*   296     8 */
		ULONG64            U64;                  /*   296     8 */
	} StreamRangeUnlock;                             /*   296     8 */


	union {
		DKAPI_StreamRead * Function;             /*   304     8 */
		ULONG64            U64;                  /*   304     8 */
	} StreamRead;                                    /*   304     8 */


	union {
		DKAPI_StreamReadScatter * Function;      /*   312     8 */
		ULONG64            U64;                  /*   312     8 */
	} StreamReadScatter;                             /*   312     8 */

	union {
		DKAPI_StreamRename * Function;           /*   320     8 */
		ULONG64            U64;                  /*   320     8 */
	} StreamRename;                                  /*   320     8 */

	union {
		DKAPI_StreamSetLength * Function;        /*   328     8 */
		ULONG64            U64;                  /*   328     8 */
	} StreamSetLength;                               /*   328     8 */

	union {
		DKAPI_StreamSetZeroData * Function;      /*   336     8 */
		ULONG64            U64;                  /*   336     8 */
	} StreamSetZeroData;                             /*   336     8 */


	union {
		DKAPI_StreamUnmap * Function;            /*   344     8 */
		ULONG64            U64;                  /*   344     8 */
	} StreamUnmap;                                   /*   344     8 */
	

	union {
		DKAPI_StreamGetEvent * Function;         /*   352     8 */
		ULONG64            U64;                  /*   352     8 */
	} StreamGetEvent;                                /*   352     8 */

	union {
		DKAPI_StreamWrite * Function;            /*   360     8 */
		ULONG64            U64;                  /*   360     8 */
	} StreamWrite;                                   /*   360     8 */

	union {
		DKAPI_StreamWriteGather * Function;      /*   368     8 */
		ULONG64            U64;                  /*   368     8 */
	} StreamWriteGather;                             /*   368     8 */

	union {
		DKAPI_SynchronizationEventCreate * Function; /*   376     8 */
		ULONG64            U64;                  /*   376     8 */
	} SynchronizationEventCreate;                    /*   376     8 */

	union {
		DKAPI_SystemTimeQuery * Function;        /*   384     8 */
		ULONG64            U64;                  /*   384     8 */
	} SystemTimeQuery;                               /*   384     8 */

	union {
		DKAPI_ThreadCreate * Function;           /*   392     8 */
		ULONG64            U64;                  /*   392     8 */
	} ThreadCreate;                                  /*   392     8 */

	union {
		DKAPI_ThreadExit * Function;             /*   400     8 */
		ULONG64            U64;                  /*   400     8 */
	} ThreadExit;                                    /*   400     8 */

	union {
		DKAPI_ThreadInterrupt * Function;        /*   408     8 */
		ULONG64            U64;                  /*   408     8 */
	} ThreadInterrupt;                               /*   408     8 */

	union {
		DKAPI_ThreadSetRegisters * Function;     /*   416     8 */
		ULONG64            U64;                  /*   416     8 */
	} ThreadSetRegisters;                            /*   416     8 */

	union {
		DKAPI_ThreadYieldExecution * Function;   /*   424     8 */
		ULONG64            U64;                  /*   424     8 */
	} ThreadYieldExecution;                          /*   424     8 */

	union {
		DKAPI_VirtualMemoryAllocate * Function;  /*   432     8 */
		ULONG64            U64;                  /*   432     8 */
	} VirtualMemoryAllocate;                         /*   432     8 */

	union {
		DKAPI_VirtualMemoryFree * Function;      /*   440     8 */
		ULONG64            U64;                  /*   440     8 */
	} VirtualMemoryFree;                             /*   440     8 */

	union {
		DKAPI_VirtualMemoryProtect * Function;   /*   448     8 */
		ULONG64            U64;                  /*   448     8 */
	} VirtualMemoryProtect;                          /*   448     8 */

	union {
		DKAPI_StreamControl * Function;          /*   456     8 */
		ULONG64            U64;                  /*   456     8 */
	} StreamControl;                                 /*   456     8 */

	union {
		DKAPI_Syscall *    Function;             /*   464     8 */
		ULONG64            U64;                  /*   464     8 */
	} Syscall;                                       /*   464     8 */

	union {
		DKAPI_AsyncCancelPumpIoRequest * Function; /*   472     8 */
		ULONG64            U64;                  /*   472     8 */
	} AsyncCancelPumpIoRequest;                      /*   472     8 */

	union {
		DKAPI_SemaphoreReleaseEx * Function;     /*   480     8 */
		ULONG64            U64;                  /*   480     8 */
	} SemaphoreReleaseEx;                            /*   480     8 */

	union {
		DKAPI_StreamEventSelect * Function;      /*   488     8 */
		ULONG64            U64;                  /*   488     8 */
	} StreamEventSelect;                             /*   488     8 */

	union {
		DKAPI_StreamEventEnum * Function;        /*   496     8 */
		ULONG64            U64;                  /*   496     8 */
	} StreamEventEnum;                               /*   496     8 */

	union {
		DKAPI_PacketAssociate * Function;        /*   504     8 */
		ULONG64            U64;                  /*   504     8 */
	} PacketAssociate;                               /*   504     8 */

	union {
		DKAPI_PacketCreate * Function;           /*   512     8 */
		ULONG64            U64;                  /*   512     8 */
	} PacketCreate;                                  /*   512     8 */


	union {
		DKAPI_ThreadSetAffinity * Function;      /*   520     8 */
		ULONG64            U64;                  /*   520     8 */
	} ThreadSetAffinity;                             /*   520     8 */
	
};

struct _DK_UPCALL_TABLE
{
  ULONG64 TableLength;
  ULONG ApiVersion;
  LIBOS_ExceptionDispatch *Function;
};
